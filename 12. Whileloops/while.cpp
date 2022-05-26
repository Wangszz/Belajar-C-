#include <iostream>
using namespace std;

int main(){

    int a = 15;

    // while(syarat){
    //     aksi
    // }

    while(a <= 20){
        cout << "asik ";
        cout << a << endl;
        a += 1; //untuk membatasi a, jadi jika lebih dari 20 maka akan berhenti
    }


    cin.get();
    return 0;
}