#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bintang untuk baris pertama: ";
    cin >> n;

    int i = n;
    do {
        int j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= i);
        cout << endl;
        i--;
    } while (i >= 1);

    return 0;
}

