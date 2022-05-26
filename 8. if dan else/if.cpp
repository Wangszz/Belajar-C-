#include <iostream>
using namespace std;

int main () {

    int a;

    cout << "masukan angka= ";
    cin >> a;

    if ( a == 5) { // jika a sama dengan 5 maka true lalu menghasilkan hasil yang akan di tampilkan
        cout << "nilai ini adalah lima" << endl;
    } else if ( a == 4) { 
        cout << "nilai ini empat" << endl;
    } else if ( a == 6) {
        cout << "nilai ini  enam" << endl;
    } else { // else adalah bukan/selain
        cout << "nilai ini bukan lima, empat, dan enam" << endl;
    }

    cout << "Selesai" << endl;

    cin.get();
    return 0;	
}

