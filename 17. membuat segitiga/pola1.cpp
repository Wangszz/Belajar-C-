#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "masukan panjang pola= ";
    cin >> n;

    cout << "pola pertama" << endl;

    for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola kedua" << endl;

    for ( int i = 1; i <= n; i++) {
        for ( int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola ketiga" << endl;

    for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j <= i; j++){
            cout << " ";
        }
        for ( int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "pola keempat" << endl;

    for ( int i = 1; i <= n; i++) {
        for ( int j = n; j > i; j--){
            cout << " ";
        }
        for ( int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola kelima" << endl;

    for ( int i = 1; i <= n; i++) {
        for ( int j = n; j > i; j--){
            cout << " ";
        }
        for ( int j = 1; j <= (i*2)-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola keenam" << endl;

     for ( int i = 1; i <= n; i++) {
        for ( int j = 1; j < i; j++){
            cout << " ";
        }
        for ( int j = n; j >= (i*2)-n; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "pola ketujuh" << endl;

    for ( int i = 1; i <= n; i++) {
        for ( int j = n; j > i; j--){
            cout << " ";
        }
        for ( int j = 1; j <= (i*2)-1; j++){
            cout << "*";
        }
        cout << endl;
    }

     for ( int i = 2; i <= n; i++) {
        for ( int j = 1; j < i; j++){
            cout << " ";
        }
        for ( int j = n; j >= (i*2)-n; j--){
            cout << "*";
        }
        cout << endl;
    }

    



    cin.get();
    return 0;
}