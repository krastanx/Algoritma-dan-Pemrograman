#include <iostream>
using namespace std;

void printMessage() {
    cout << "Hello, world!" << endl;
}


int main () {
    printMessage (); //Error berada di bagian ini karena berisi tanda kurung"()" sehinga saat build and run "Hello, world!" tidak muncul
    return 0;

}
