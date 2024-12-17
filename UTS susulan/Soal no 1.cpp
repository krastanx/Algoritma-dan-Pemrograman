#include <iostream>
using namespace std;

void cekGenapGanjil(int bilangan) {
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap" << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil" << endl;
    }
}

int main() {
    int bilangan;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;


    cekGenapGanjil(bilangan);

return 0;
}
