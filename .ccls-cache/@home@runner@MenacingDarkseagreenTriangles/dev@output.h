#include<iostream>
#include"proses.h"
using namespace std;

void tabung::output(){
  cout<<"===================="<<endl;
  cout<<"Pengeluaranmu    : "<<totpeng<<endl;
  cout<<"Sisa Uangmu      : "<<jmlhsaku - totpeng<<endl;
  tabungan = jmlhsaku - totpeng;
  cout<<"Total Tabunganmu : "<<tabungan<<endl;
  cout<<"===================="<<endl;
}