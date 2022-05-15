#include <iostream>
using namespace std;

int kuadrat(int a){ // seirng disebut sebagai reporter / fungsi yang melaporkan kembali hasi;
    int b;
    b = a * a;
    return b;
}

int kali(int c, int d){
    int e;
    e=  c * d;
    return e;
}

void tampilkan(int hasil2) {
    cout << "hasil= " << hasil2 << endl;
}

int main () {

    int hasil, hasil2, input, e ,c, d;
    cout << "masukan angka yg akan dikuadratkan= ";
    cin >> input;
    input = kuadrat(input);
    cout << "hasilnya= " << input << endl << endl;

    cout << "masukan angka pertama yang akan dikali= ";
    cin >> c ;
    cout << "masukan angka kedua yang akan dikali= ";
    cin >> d ;
    hasil2 = kali(c,d);
    tampilkan(hasil2);

    cin.get();
    return 0;
}