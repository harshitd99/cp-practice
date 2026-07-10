#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    
    vector<long long> A(n + 1); // 1-indexed array
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    
    long long count = 0;
    
    // Four nested loops for all valid quadruplets
    // Constraints: 1 <= i < j < k < l <= n
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            for (int k = j + 1; k <= n; k++) {
                for (int l = k + 1; l <= n; l++) {
                    // Check the condition: A[i] - 2*A[j] + 3*A[k] - 4*A[l] = x
                    long long result = A[i] - 2 * A[j] + 3 * A[k] - 4 * A[l];
                    if (result == x) {
                        count++;
                    }
                }
            }
        }
    }
    
    cout << count << endl;
    return 0;
}