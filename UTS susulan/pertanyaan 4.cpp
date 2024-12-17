#include <iostream>
using namespace std;


int menghitungHasilKali(int a, int b) {
    return a * b;
}

int main() {

    int bilangan1, bilangan2;


    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;


    if (bilangan1 > 0 && bilangan2 > 0) {

        int hasil = menghitungHasilKali(bilangan1, bilangan2);
        cout << "Hasil kali dari " << bilangan1 << " dan " << bilangan2 << " adalah: " << hasil << endl;
    } else {
        cout << "Harap masukkan hanya bilangan bulat positif!" << endl;
    }

    return 0;
}
