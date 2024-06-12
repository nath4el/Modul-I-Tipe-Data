#include<iostream>
using namespace std;


int tambah_2311102007(int a, int b) {
    return a + b;
}


int kali(int a, int b) {
    return a * b;
}

int main() {
    
    int angka1, angka2;
    cout << "Masukkan angka pertama cuy: ";
    cin >> angka1;
    cout << "Masukkan angka kedua cuy: ";
    cin >> angka2;

    
    int hasil_tambah = tambah_2311102007(angka1, angka2);
    int hasil_kali = kali(angka1, angka2);

    
    cout << "Hasil penjumlahan: " << hasil_tambah << endl;
    cout << "Hasil perkalian: " << hasil_kali << endl;

    return 0;
}
