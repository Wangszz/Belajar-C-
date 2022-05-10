#include <iostream>
using namespace std;

int main () {

    int a = 3;
    int b = 4;
    bool hasil;

    // operator matematika or, and, not

    //not --untuk menegasi. menggunakan tanda seru
    hasil = !(a == 3);
    cout<< hasil << endl;

    //and ( && ) -- jika kedua nilai benar maka hasilnya akan true
    cout << " untuk and \n";
    hasil = (a == 3) and (b == 4);
    cout<< hasil << endl;
    hasil = (a == 3) && (b == 5);
    cout<< hasil << endl;
    hasil = (a == 4) && (b == 3);
    cout<< hasil << endl;

    //or ( || ) --tidak harus kedua nilai benar untuk menghasilkan true, namun jika salah semua maka false
    cout << " untuk OR" << endl;
    hasil = (a == 3) or (b == 4);
    cout<< hasil << endl;
    hasil = (a == 3) || (b == 5);
    cout<< hasil << endl;
    hasil = (a == 4) || (b == 3);
    cout<< hasil << endl;


    cin.get();
    return 0;
}