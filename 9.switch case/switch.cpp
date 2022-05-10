#include <iostream>
using namespace std;

int main () {

    int a;

    cout << "masukan angka= ";
    cin >> a;

    switch (a) { // lebih diuntukan untuk int bukan bool
        case 1:
            cout << "a = 1" << endl;
            break; // break agar case yang dibaca berhenti disini
        case 2:
            cout << "a = 2" << endl;
        case 3:
            cout << "a = 3" << endl;
        case 4:
            cout << "a = 4" << endl;
        
        default: // agar nilai diluar yg ditetapkan tidak terbaca
            cout << "empty" << endl;
    }

    cout << "selesai" << endl;


    cin.get();
    return 0;
}