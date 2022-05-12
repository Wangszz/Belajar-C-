#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Nilai awal adalah= " << a << endl;

    //assignment operator
    // 1. variabel = variabel operator eksperesi
    //      a      =     a       +         5
    //2. variabel operator= ekspresi
    //      a         +=       5

    a += 3;
    cout << "setelah menggunakan assignment operator menjadi= " << a << endl;
    a /= 3;
    cout << "setelah menggunakan assignment operator menjadi= " << a << endl;
    a %= 3;
    cout << "setelah menggunakan assignment operator menjadi= " << a << endl;

    //post dan preincrement

    //post increment
    //b++ sama saja dengan a = a + 1 (pwrhitungan akan muncul diakhir)
    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl << endl;

    //prestincrement ++c (perhitungan akan langsung muncul)
    cout << c << endl;
    cout << ++c << endl;
    cout << c << endl;


    cin.get();
    return 0;
}