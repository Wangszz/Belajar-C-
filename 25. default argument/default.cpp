#include <iostream>
using namespace std;

double volume(double panjang, double lebar, double tinggi = 1); //1 adalah default argument dari fungsi volumet
double panjang, lebar, tinggi = 1;

int main() {

    cout << "volume kubus: " << volume(4,5) << endl; //tingginya akan mengikuti default argument
    cout << "masukan panjang: ";
    cin >> panjang;
    cout << "masukan lebar: ";
    cin >> lebar;
    cout << "masukan tinggi: ";
    cin >> tinggi;
    cout << "volumenya adalah: " << volume(panjang, lebar, tinggi);
    cin.get();
    return 0;
} 

double volume(double panjang, double lebar, double tinggi) {
    return  panjang*lebar*tinggi;
}