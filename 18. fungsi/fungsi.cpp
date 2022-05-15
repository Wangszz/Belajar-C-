#include <iostream>
#include  <cmath>
using namespace std;

int main() {

    int x;
    cout << "masukan nilai x= ";
    cin >> x;

    int y = sqrt(x); //sqrt adalah fungsi yg fiambil dari cmath library
    cout << "akarnya adalah= " << y << endl;
    cin.get();
    return 0;
}