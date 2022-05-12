#include <iostream>
using namespace std;

int main() {

    int a = 10;

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

    cin.get();
    return 0;
}