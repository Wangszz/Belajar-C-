#include <iostream>

using namespace std;

int main () {

    for ( int a = 0; a <= 10; a++) {

        if ( a == 5) {
            break; //membuat looping berhenti
        }
        cout << a << endl;
    }

    cout << "\n while \n";

    int a=0;
    while (a <=10) {
        
        a++; //increment ditulis sebelum if jika while
        if ( a == 5) {
            continue; //membuat dilewati berhenti
        }
        cout << a << endl;
    }

    cout << "end"<< endl;

    cin.get();
    return 0;
}