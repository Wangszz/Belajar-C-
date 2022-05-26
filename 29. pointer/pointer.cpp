#include <iostream>
using namespace std;

int main (){

    int a = 5;

    cout << "\n\naddress dari a= " << &a <<endl;
    cout << "nilai a adalah= " << a << endl;

    int &b = a; //membuat address b sama dengan a
    cout << "adrress fari b: " << &b <<endl;
    cout << "nilai dari b= " << b <<endl;

    // membuktikan bahwa adrres sama dengan
    b = 4;
    cout << "\n\nnilai dari a= " << a <<endl;
    cout << "nilai dari b= " << b <<endl;

    cin.get();
    return 0;
}