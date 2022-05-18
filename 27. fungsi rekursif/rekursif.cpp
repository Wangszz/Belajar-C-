#include <iostream>
using namespace std;

int fungsipangkat1(int a, int b) {
    int hasil = a;
    for (int i = 1; i < b; i++) {
        hasil = a * hasil;
    }
    return hasil;
}

int fungsipangkat2 (int a, int b) {

    if (b == 1) {
        return a;
    } else {
        return a * fungsipangkat2(a, (b-1));
    }
}


int main (){

    int a,b;
    cout <<"masukan angka: " << endl;
    cin >> a;
    cout <<"masukan pangkat: " << endl;
    cin >> b;
    cout << "hasil: " << fungsipangkat1(a,b) << endl;
    cout << "hasil2: " << fungsipangkat2(a,b);
    
    cin.get();
    return 0;
}