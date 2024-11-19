#include <iostream>
#include <cmath> // Untuk fungsi matematika seperti M_PI

using namespace std;

// Function untuk menghitung luas persegi
int luasPersegi(int sisi) {
    return sisi * sisi;
}

// Function untuk menghitung luas lingkaran
double luasLingkaran(double radius) {
    return M_PI * radius * radius; // M_PI adalah nilai π (pi)
}

// Procedure untuk menghitung luas segitiga
void luasSegitiga(double alas, double tinggi) {
    double luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas << endl;
}

int main() {
    int pilihan;
    bool ulang = true;

    while (ulang) {
        // Menampilkan menu
        cout << "=== Aplikasi Perhitungan Luas Geometri ===" << endl;
        cout << "1. Hitung luas persegi" << endl;
        cout << "2. Hitung luas lingkaran" << endl;
        cout << "3. Hitung luas segitiga" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan Anda (1-4): ";
        cin >> pilihan;

        if (pilihan < 1 || pilihan > 4) {
            cout << "Pilihan tidak valid. Coba lagi.\n" << endl;
            continue;
        }

        switch (pilihan) {
            case 1: { // Luas persegi
                int sisi;
                cout << "Masukkan panjang sisi persegi: ";
                cin >> sisi;

                // Untuk memvalidasi input
                if (sisi <= 0) {
                    cout << "Sisi harus lebih besar dari 0!" << endl;
                } else {
                    int luas = luasPersegi(sisi);
                    cout << "Luas persegi adalah: " << luas << endl;
                }
                break;
            }
            case 2: { // Luas lingkaran
                double radius;
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> radius;

                // Untuk memvalidasi input
                if (radius <= 0) {
                    cout << "Jari-jari harus lebih besar dari 0!" << endl;
                } else {
                    double luas = luasLingkaran(radius);
                    cout << "Luas lingkaran adalah: " << luas << endl;
                }
                break;
            }
            case 3: { // Luas segitiga
                double alas, tinggi;
                cout << "Masukkan panjang alas segitiga: ";
                cin >> alas;
                cout << "Masukkan tinggi segitiga: ";
                cin >> tinggi;

                // Untuk memvalidasi input
                if (alas <= 0 || tinggi <= 0) {
                    cout << "Alas dan tinggi harus lebih besar dari 0!" << endl;
                } else {
                    luasSegitiga(alas, tinggi); // Memanggil procedure
                }
                break;
            }
            case 4: { // Keluar
                cout << "Terima kasih telah menggunakan aplikasi ini!" << endl;
                ulang = false;
                break;
            }
        }
        cout << endl;
    }

    return 0;
}
