 //Para la clase map explore el uso de metodos para:

 #include<iostream>
 #include<map>
 #include<string>
 using namespace std;

//a)  Agregar parejas (llave,valor) al mapa

/*
 int main(){
   map<char,int> mymap;

   mymap.insert(pair<char,int>('a',100));
   mymap.insert(pair<char,int>('z',200));
   map<char,int>::iterator it;

   for(it=mymap.begin();it!=mymap.end();it++)
      cout<< it->first<< "=>" <<it->second <<'\n';
   return 0;
 }
*/

//b)  Eliminar parejas por llave

/*
 int main(){
   map<char,int> mymap;
   map<char, int>::iterator it;


   mymap['a']=10;
   mymap['b']=20;
   mymap['c']=30;
   mymap['d']=40;
   mymap['e']=50;
   mymap['f']=60;

   it = mymap.find('b');
   mymap.erase(it);

   mymap.erase('c');

   it = mymap.find('e');
   mymap.erase (it,mymap.end());


   for(map<char,int>::iterator it=mymap.begin(); it!=mymap.end();it++)
      cout<< it->first << " => " << it->second <<'\n';

   return 0;
 }
*/
//c)  Acceder al valor asociado a una llave
/*
 int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;

  it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout << "a => " << mymap.find('a')->second << '\n';
  std::cout << "c => " << mymap.find('c')->second << '\n';
  std::cout << "d => " << mymap.find('d')->second << '\n';

  return 0;
}
*/

//d)  Usar operator []
/*
int main ()
{
  std::map<char,std::string> mymap;

  mymap['a']="an element";
  mymap['b']="another element";
  mymap['c']=mymap['b'];

  std::cout << "mymap['a'] is " << mymap['a'] << '\n';
  std::cout << "mymap['b'] is " << mymap['b'] << '\n';
  std::cout << "mymap['c'] is " << mymap['c'] << '\n';
  std::cout << "mymap['d'] is " << mymap['d'] << '\n';

  std::cout << "mymap now contains " << mymap.size() << " elements.\n";

  return 0;
}
*/

 //e)  Determinar el numero de elementos en el mapa

 #include <iostream>
 #include <map>

 int main ()
 {
   std::map<char,int> mymap;
   mymap['a']=101;
   mymap['b']=202;
   mymap['c']=302;

   std::cout << "mymap.size() is " << mymap.size() << '\n';

   return 0;
 }
