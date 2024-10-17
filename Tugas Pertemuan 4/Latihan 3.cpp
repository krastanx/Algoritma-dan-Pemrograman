#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += i;
    }


    cout << "Sum is: " << sum << endl; //error berada di bagian terakhir endl tidak berisi tanda titik koma ";"


    return 0;
}

