#include <iostream>
using namespace std;

double hitung_luas(double jarijari) {
    double luas = (jarijari * jarijari)* 3.14;
    return luas;
}

double keliling_hitung(double jarijari) {
    double keliling = (jarijari * 2)* 3.14;
    return keliling;
}

void hasilnya_luas(double jarijari) {
    cout << "Luasnya adalah= " << hitung_luas (jarijari) << endl;
}

void hasilnya_keliling(double jarijari) {
    cout << "kelilingnya adalah= " << keliling_hitung (jarijari) << endl;
}

int main () {

    double jarijari;
    cout << "\n==== Menghitung luas & keliling lingkaran ====\n\n";
    cout <<"masukan jari-jarinya= ";
    cin >> jarijari;

    hasilnya_luas(jarijari);
    hasilnya_keliling(jarijari);

    cin.get();
    return 0;
}