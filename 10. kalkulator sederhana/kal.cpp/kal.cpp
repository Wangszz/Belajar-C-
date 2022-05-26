#include <iostream>
using namespace std;

int main() {

    float a,b,hasil;
    char aritmatika;

    cout << "\nKalkulator slebew";

    // user input

    cout << "\n\nMasukan nilai awal= ";
    cin >> a;
    cout << "Pilih operator +, -, /, * = ";
    cin >> aritmatika;
    cout << "Masukan nilai selanjutnya= ";
    cin >> b;


    if (aritmatika == '+' ) {
        hasil = a + b;
    }

    if (aritmatika == '-' ) {
        hasil = a - b;
    }

    if (aritmatika == '/' ) {
        hasil = a / b;
    }

    if (aritmatika == '*' ) {
        hasil = a * b;
    }

    cout << "\n\n===Hasil perhitungan===" << endl;
    cout << a << aritmatika << b;
    cout << " = " << hasil << endl << endl;


    cin.get();
    return 0;
}