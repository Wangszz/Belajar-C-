#include <iostream>
using namespace std;

int main() {

    int a;
    float b;
    int c;
    float hasil;
    
    
    cout << "Selamat datang di program perhitungan \n";
    cin.get();
    cout << "1. perkalian 2. pembagian 3.pengurangan 4.penjumlahan \n";
    cin.get();
    cout << "Masukan nomor yang anda pilih= ";
    cin >> c;

    if (c == 1) {
        cout << "Masukan nomor= ";
        cin >> a;
        cout << "dikali= ";
        cin >> b;
        cout << "Hasil= " << a * b << endl;
    }
    if (c == 2) {
        cout << "Masukan nomor= ";
        cin >> a;
        cout << "dibagi= ";
        cin >> b;
        cout << "Hasil= " << a / b << endl;
    }
    if (c == 3) {
        cout << "Masukan nomor= ";
        cin >> a;
        cout << "dikurang= ";
        cin >> b;
        cout << "Hasil= " << a - b << endl;
    }
    if (c == 4) {
        cout << "Masukan nomor= ";
        cin >> a;
        cout << "ditambah= ";
        cin >> b;
        cout << "Hasil= " << a + b << endl;
    }

    cin.get();
    return 0;
}