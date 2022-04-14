#include<iostream>
#include"../library/proses.h"

using namespace std;

void tabungan::output(){
    cout << "Total Pengeluaranmu : " << totpeng << "\n";
    cout << "Sisa Uangmu         : " << jmlhsaku - totpeng << "\n";
    tabungan = jmlhsaku - totpeng;
    cout << "Yang masuk ke tabunganmu sebesar Rp. " << tabungan << "\n";
}