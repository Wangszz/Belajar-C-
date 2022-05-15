#include <iostream>
#include <cstdlib> // library yg berisi hal hal random
using namespace std;

int main() {


    char hasil;
    while (true) {
        cout << "mulai lempar dadu (y/n): ";
        cin >> hasil;

        if (hasil == 'y') {
            cout << 1 + (rand() % 6) << endl; // ditambah satu agar tidak ada 0
            }else if ( hasil == 'n') {
                break;
            } else {
                cout << "pilihan anda salah" << endl;
            }
    }

    cin.get();
    return 0;
}