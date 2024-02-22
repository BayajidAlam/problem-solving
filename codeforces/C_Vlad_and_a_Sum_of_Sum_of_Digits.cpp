#include <iostream>
using namespace std;

long long sumOfDigits(long long n) {
    long long sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long solve(long long n) {
    long long res = 0;
    for (long long p = 1; p <= n; p *= 10) {
        res += (n / (p * 10)) * (p * 45);
        long long d = (n / p) % 10;
        res += d * (d - 1) / 2 * p + d * (n % p + 1);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}