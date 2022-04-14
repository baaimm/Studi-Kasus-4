#include<iostream>
#include"../library/input.h"

using namespace std;
void tabungan::proses(){  
  for (int i=1;i<bulan;i++){
        cout << "Masukan pengeluaranmu pada bulan ke- " << i <<" : ";
        cin >> x[i];
        totpeng += x[i];
    }
}