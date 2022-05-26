#include <iostream>
using namespace std;

void fungsi(int *b) {
    cout << "addres b= " << b <<endl;
    cout << "nilai b= "<< *b <<endl; //deferencing
}

void kuadrat (int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr);
}

int main () {

    int a = 5;
    cout << "address a= " << &a << endl;
    cout<< "nilai a= " << a << endl;

    // fungsi (&a); untuk membuat pointer b memiliki alamat a
    kuadrat (&a);

    cout << "kuadrat a= " << a << endl;

    cin.get();
    return 0;
}