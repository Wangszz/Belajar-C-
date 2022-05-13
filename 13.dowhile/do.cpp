#include <iostream>
using namespace std;

int main () {

    int a = 5;

    //do while akan melakukan aksi terlebih dahulu sebelum syarat
    // do {
    //     aksi
    // } while (syarat)

    do{
        cout << "asik" << endl;
        cout << a <<endl;
        a--;
    } while (a >= 0);

    cout << "selesai" << endl;
    cin.get();
    return 0;
}