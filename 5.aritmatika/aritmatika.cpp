#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 4; // float digunakan karena hasilnya desimal
    int c;
    int d;
    int hasil;

    //penjumlahan
    hasil= a + b;
    cout<< a << " + " << b << "= " << hasil << endl;

    //pengurangan
    hasil= a - b;
    cout<< a << " - " << b << "= " << hasil << endl;

    //pengalian
    hasil= a * b;
    cout<< a << " X " << b << "= " << hasil << endl;

    //pembagian
    hasil= a / b;
    cout<< a << " : " << b << "= " << hasil << endl;

    //modulus (sisa dari pembagian, misal sepuluh bagi 2 hasilnya adalah sisa 2) (hanya bisa dipakai pada tipe data bil bulat)
    hasil= a % b;
    cout<< a << " % " << b << "= " << hasil << endl;

    //oprator perkalian
    cout << "Perkalian" << endl;
    cout << "masukan angka= ";
    cin >> c;
    cout << "masukan angka= ";
    cin >> d;
    cout << "Hasil= " << c * d << endl;

    cin.get();
    return 0;
}