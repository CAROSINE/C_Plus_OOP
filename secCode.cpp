#include <bits/stdc++.h>
using namespace std;

// fast modular exponentiation
long long modExp(long long base, long long exp, long long mod)
{
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    long long C;
    cin >> C;

    const long long n = 77;   // p * q
    const long long d = 37;   // modular inverse of e=13 mod φ(77)=60

    long long M = modExp(C, d, n);
    cout << M << endl;

    return 0;
}
