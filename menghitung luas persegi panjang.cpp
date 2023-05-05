#include <iostream>

using namespace std;

int main() {
  int panjang,lebar;
  
  
  cout<<"masukan panjang: ";
  cin >> panjang;
  
  cout<<"masukan lebar: ";
  cin >> lebar;
  
  int luas = "panjang * lebar: ";
  int keliling = 2 * (panjang + lebar);
  
  cout<<"Luas persegi panjang: "<< luas <<endl; 
  cout <<"Keliling persegi panjang: "<<keliling<<endl; 
  
  return 0; 
  }