#include<iostream>

using namespace std;

class tabungan{
    public:
    void input();
    void proses();
    void output();

    private:
    int x[10],bulan,totpeng = 0,jmlhsaku = 0,tabungan,;
};

void tabungan::input(){
    cout << "Masukan Jumlah Uang Saku Setiap  Bulan : ";
    cin >> jmlhsaku;
    cout << "Masukan Bulan : ";
    cin >>bulan;

}