#include<vector>
#include<iostream>
#include<array>
using namespace std;

/*[Bidirectional  bubble  sort.] Este algoritmo, tambien conocido como cocktail
shaker sort, es una variacion estable de bubble sort.
La idea es ordenar en ambas direcciones en cada recorrido del arreglo.
De forma tal que luego de la primera iteracion, tanto el mayor como el menor
elemento en el arreglo estan en sus posiciones finales.
Estae strategia reduce el numero de comparaciones. Implemente este algoritmo y
analice su complejidad computacional para el mejor caso y el peor caso.*/


void bubbleSort(array<int,int n> a){
  int n = a.size();
  for( int i=1;i<=(n-1);i++){
    for( int j=1;j<=(n-1);i++){
      if(a[j] > a[j+1]){
        swap(a[j],a[j+1]);
      }
    }
  }
}

int main(){
  array<int,5> myarray = {1,2,3,4,5};
  bubbleSort(myarray);
  for(unsigned int i=0;i<10;i++) cout << "" << myarray[i];
  cout<< '\n';
  return 0;
}
