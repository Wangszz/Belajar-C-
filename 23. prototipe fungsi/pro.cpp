#include <iostream>
using namespace std;

double hitung_luas (double p, double l); // prototipe fungsi = agar fungsi yang ada dibawah bisa terbaca dan berfungsi.
void println (double x);

int main() {

    double panjang, lebar, luas;
    cout << "masukan panjang= ";
    cin >> panjang;
    cout << "masukan lebar4= ";
    cin >> lebar;

    luas= hitung_luas(panjang, lebar);
    println (luas);

    cin.get();
    return 0;
}

 double hitung_luas (double p, double l) {
        return p * l;
    }

void println(double x){
    cout << "hasilnya adalah= " << x << endl;
}