#include <iostream>
using namespace std;


//basic function
int luas_kotak(int p, int l) {
    int luas= p*l;
    return luas;
}

//overloading function

double luas_kotak (double sisi) {
    return sisi*sisi;
}

int main () {

    cout << "luas kotak 2x3= " << luas_kotak (2,5) << endl;
    cout << "luas kotak 2x2= " << luas_kotak (2.75);

    cin.get();
    return 0;
}