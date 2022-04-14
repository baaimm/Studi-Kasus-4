#include<iostream>
#include"../library/input.h"

using namespace std;
void tabungan::proses(){
    for (int i=0;i<bulan;i++){
        cout << "Masukan pengeluaranmu : ";
        cin >> x[i];
        totpeng += x[i];
    }
}
