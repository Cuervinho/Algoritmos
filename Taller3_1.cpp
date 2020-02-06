/* Dado un arreglo de n−1 enteros, estos estan en el rango de 1 a n. No hay duplicados
 en el arreglo ası que falta uno de los enteros en la lista. Disene e implemente un
 algoritmo para encontrar el entero faltante.*/

 #include<iostream>
 #include<array>

using namespace std;

int main(){
  array<int,8> A  {0,1,2,3,5,6,7,8};
  int n = A.size();
  for(int i =0;i<=n;i++){
    if(A[i]!=i){
      cout << i;
      return i;
    }
  }
  return  0;

}
