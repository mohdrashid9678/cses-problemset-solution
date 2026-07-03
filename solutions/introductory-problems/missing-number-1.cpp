#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;
    long long given_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        long long a;
        cin >> a;
        given_sum += a;
    }

    cout << total_sum - given_sum << "\n";

    return 0;
}
