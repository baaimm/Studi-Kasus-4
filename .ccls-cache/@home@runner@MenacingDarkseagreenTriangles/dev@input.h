#include<iostream>

using namespace std;

class tabung{
  public:
  void input();
  void proses();
  void output();

  private:
  int x[10],bulan,totpeng = 0,jmlhsaku = 0,tabungan;
};

void tabung::input(){    
    cout << "Berapa Bulan anda ingin menabung : ";
    cin >>bulan;
  
    cout << "Masukan Jumlah Uang Saku setiap bulan : ";
    cin >> jmlhsaku;

}