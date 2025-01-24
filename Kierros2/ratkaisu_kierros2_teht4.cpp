#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool prime_all(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_half(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_square_root(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void analyze_primes(bool (*isPrime)(int)) {
    const int RANGE = 10000;
    vector<int> primes;

    for (int i = 1; i <= RANGE; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    cout << "Alkuluvut: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << "\n";

    int prime_count = primes.size();
    double percentage = (double)prime_count / RANGE * 100;
    cout << "Löydettyjen alkulukujen määrä: " << prime_count << "\n";
    cout << "Alkulukujen prosenttiosuus: " << percentage << "%\n";
}

int main() {
    cout << "Tarkistetaan prime_all\n";
    analyze_primes(prime_all);

    cout << "\nTarkistetaan prime_half:\n";
    analyze_primes(prime_half);

    cout << "\nTarkistetaan prime_square_root\n";
    analyze_primes(prime_square_root);

    return 0;
}