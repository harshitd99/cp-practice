/*A. Factors of All Numbers

time limit per test4 s

memory limit per test256 megabytes

Given an integer N
, print the list of all factors for every number from 1
 to N
.

For each number i
 (1≤i≤N), output all integers that divide i
 in increasing order.

Input:
A single integer N  (1≤N≤106).

Output:
For each i
 from 1 to N, print a line containing all factors of i in increasing order.

Example

Input
5

Output
1
1 2
1 3
1 2 4
1 5
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> factors(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            factors[j].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int factor : factors[i]) {
            cout << factor << " ";
        }
        cout << "\n";
    }
    return 0;
}
