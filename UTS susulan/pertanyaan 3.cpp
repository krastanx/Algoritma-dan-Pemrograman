#include <iostream>
using namespace std;

int main() {
    int N, jumlah = 0;

    cout << "Masukkan nilai N: ";
    cin >> N;


    if (N <= 0) {
        cout << "Nilai N harus bilangan positif!" << endl;
        return 0;
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            jumlah += i;
        }
    }

    cout << "Jumlah bilangan genap dari 1 hingga " << N << " adalah: " << jumlah << endl;

    return 0;
}
