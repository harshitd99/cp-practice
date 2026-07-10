/*B. Factor Count Queries
You are given Q queries. Each query contains an integer x.

For each query, print the number of positive divisors of x.

Input
The first line contains a single integer Q (1≤Q≤10^6).

Each of the next Q
 lines contains an integer x (1≤x≤10^6).

Output
For each query, print a single integer — the number of positive divisors of x.

Example

Input
3
1
6
10

Output
1
4
4

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    const int n = 1e6;

    vector<int> factors(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            factors[j]++;
        }
    }
    while (q--) {
        int x;
        cin >> x;
        cout << factors[x] << '\n';
    }
    return 0;
}
