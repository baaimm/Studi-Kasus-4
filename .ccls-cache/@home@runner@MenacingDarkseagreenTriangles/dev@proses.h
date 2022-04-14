#include<iostream>
#include"input.h"

using namespace std;

void tabung::proses(){
      for (int i=0;i<bulan;i++){
        cout << "Masukan pengeluaranmu : ";
        cin >> x[i];
        totpeng += x[i];
    }
  }