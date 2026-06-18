#include <iostream>
using namespace std;


int jumlah_digit(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return (n % 10) + jumlah_digit(n / 10);
    }
}

int main() {
    int angka = 456;
    cout << "Jumlah digit dari " << angka << " adalah: " << jumlah_digit(angka) << endl;
    return 0;
}