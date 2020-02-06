letrasProposicionales = ["p","q","r","s"]
conectivosBinarios = ['Y','O','>']
negacion = ['-']

class Tree():
    def __init__(self,L,iz,der):
        self.left = iz
        self.right = der
        self.label = L
        
A0=Tree('r',None,None)
A1=Tree('q',None,None)
A2=Tree('->',A1,A0)
A3=Tree('p',None,None)
A4=Tree('O',A3,A2)

def Inorder(A):
    if A.right == None:
        return A.label
    elif A.label == '-':
        return '-' + Inorder(A.right)
    elif A.label in ['Y', 'O', '>']:
        return "(" + Inorder(A.left) + A.label + Inorder(A.right) + ")"

def Num_Conec(f):
    if f.label in letrasProposicionales:
        return 0
    elif f.label in negacion:
        return 1+Num_Conec(f.right)
    elif f.label in conectivosBinarios:
        return 1 + Num_Conec(f.left) + Num_Conec(f.right)
    else:
        print("Oops,el rótulo es incorrecto")

def Num_Atomos(f):
    if f.right == None:
        return 1
    elif f.label == "-":
        return Num_Atomos(f.right)
    elif f.label in ["Y", "O", ">"]:
        return Num_Atomos(f.left)+Num_Atomos(f.right)

def Vi(f):
    if f.right == None:
        return I(f.label)
    elif f.label in negacion:
        return 1 - Vi(f.right)
    elif f.label == 'Y':
        return Vi(f.left)*Vi(f.right)
    elif f.label == 'O':
        return max([Vi(f.left),Vi(f.right)])
    elif f.label == '->':
        return max([1-Vi(f.left),Vi(f.right)])
    elif f.label == '<->':
        return 1-(Vi(f.left)-Vi(f.right))**2



