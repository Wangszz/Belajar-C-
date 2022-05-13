#include <iostream>
using namespace std;

int main () {


    //FOOOOOORR LOOOOP
    // for (inisiasi; syarat; increment/decrement/ compound)


    cout << "\nawal1 \n";
    for (int a = 20; a >=10; a--) {
        cout << a << endl;
    }

    cout << "\nawal2 \n";
    for (int a = 20; a >=0; a -= 2) {
        cout << a << endl;
    }

    int total= 0;
    cout << "\nawal3 \n";
    for (int a = 20; a >=10; a -= 2, total -= a) {
        cout << a << " || " << total << endl;
    }


    cin.get();
    return 0;
}