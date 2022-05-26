#include <iostream>
#include <array>

using namespace std;

int main() {

    //================================Rumus================================
    // array<int, jumlah array>nama array

    array <int, 5> mian;

    for (int i=0; i<=4; i++) {
        mian[i] = i;
        cout << "nilai [" << i << "] = " << mian[i];
        cout << " || address= " << &mian[i] << endl;
    }

    // ukuran array
    cout << "\nukuran: " << mian.size() << endl;
    //address awal
    cout << "address awal: " << mian.begin() << endl;
    //address akhir
    cout << "address akhir: " << mian.end() << endl;
    //address ke-3
    cout << "address ke-3: " << &mian.at(3) << endl;
    



    cin.get();
    return 0;
}