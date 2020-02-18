#include<iostream>
#include<vector>
using namespace std;

float dispble(vector<float> consumo,float cupo_tot){
  vector<int>::size_type sz = consumo.size();
  float consumo_total = 0;
  for (unsigned i=0; i<sz; i++)
    consumo_total+=consumo[i];
  float cupo_disponible = cupo_tot - consumo_total;
  if (cupo_disponible>0){
    cout << "Puede seguir consumiendo , tiene : " ;
    return  cupo_disponible;
  }
  else{
    cout << "Esta sobrecargada , debe : " ;
    return cupo_disponible ;
  }
}

int transcc(vector<float> consumo,float cupo_tot){
  vector<int>::size_type sz = consumo.size();
  float consumo_total = 0;
  float cupo_disponible = cupo_tot;
  for (unsigned i=0; i<sz; i++){
    consumo_total+=consumo[i];
    cupo_disponible = cupo_disponible - consumo[i];
    //cout << "i:" << i << " Cupo disponible: " << cupo_disponible << endl ;
    if (cupo_disponible < 0)
      return i-1;
  }
  return -1;

}

int main(){
  vector<float> consumo {6.6,1.1,4.4,2.2};
  float cupo_tot = 16.8;
  //cout <<  dispble(consumo,cupo_tot) << endl;
  cout <<  transcc(consumo,cupo_tot) << endl;

}
