#include <iostream>
using namespace std;

int fibonacci_iteratif(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int a = 0;
    int b = 1;
    int hasil_fib;

    for (int i = 2; i <= n; i++) {
        hasil_fib = a + b;
        a = b;
        b = hasil_fib;
    }
    
    return hasil_fib;
}

int main() {
    int n = 6;
    cout << "Fibonacci bulan ke-" << n << " (Iteratif) adalah: " << fibonacci_iteratif(n) << endl;
    return 0;
}