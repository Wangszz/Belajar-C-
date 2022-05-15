#include <iostream>
using namespace std;

int kuadrat(int a){
    int b;
    b = a * a;
    return b;
}

int kali(int c, int d){
    int e;
    e=  c * d;
    return e;
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
    hasil2 = c * d;
    cout << "hasil= " << hasil2 << endl;

    cin.get();
    return 0;
}