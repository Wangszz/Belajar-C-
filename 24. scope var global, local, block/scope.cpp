#include <iostream>
using namespace std;


int x = 10; // variabel global

int ambil_global () {
    return x; // mengambil variabel global
}

int local_scope() {
    int x = 6; // variabel local scope local_scope
    return x;
}

int main () {

    cout << "1. variabel global= " << x << endl;
    int x=9; // variabel local main
    cout << "2. variabel local main= " << x << endl;
    cout << "3. variabel local_scope= " << local_scope() << endl;
    cout << "4. variabel global= " << ambil_global () << endl;
    cout << "5. variabel local main= " << x << endl;

    {
        // var block scope, !var yg ada di dlm main jga termasuk block
        cout << "variabel local main= " << x << endl;
        int x= 7;
        cout << "variabel local block= " << x << endl;
        cout << "variabel global= " << ambil_global() << endl;
    }

    cout << "variabel local main= " << x << endl;


    cin.get();
    return 0;
}