/*Escriba un programa que
a)  Cree un objeto de la clase map<string,string>
b)  Agregue al mapa elementos donde la llave corresponda a una palabra y el valora su definicion
c)  Use operator[] para acceder al valor asociado a algunas llaves
d)  Elimine un elemento del mapa usando su llave
e)  Recorra e imprima todos los elementos del mapa (utilice un iterador, primero con un ciclo for y luego con un while)*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
  map<string,string> mymap;
  map<string,string>::iterator it;

  mymap.insert(pair<string,string>("Cristiano","goleador"));
  mymap.insert(pair<string,string>("Matemáticas","numeros"));
  mymap.insert(pair<string,string>("Robotica","Robot"));

  for(it = mymap.begin();it!=mymap.end();it++)
  cout << it->first << "  =>  " << it->second << '\n' ;

  cout<< endl;

  if (mymap["Cristiano"] == "goleador")
  mymap.erase("Cristiano");

  while(!mymap.empty()){
    cout << mymap.begin()->first<< " => " << mymap.begin() ->second << '\n';
    mymap.erase(mymap.begin());
  }

  return 0;
}
