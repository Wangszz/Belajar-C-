#include <iostream>
using namespace std;

int main () {

    int data;

    cout << "Tentukan banyakanya data= ";
    cin >> data;

    if (data == 20) {

        cout << "bilangan genap atara 1 dan 20 adalah: \n";
        for (int data = 20; data > 0; data -= 2) {
            cout << data <<endl;
        }
    }

    cin.get();
    return 0;
}