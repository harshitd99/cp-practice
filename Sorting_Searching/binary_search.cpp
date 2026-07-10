#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int x;
    cin >> x;

    bool flag = false;
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (A[mid] == x) {
            flag = true;
            break;
        }
        else if (A[mid] > x) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}