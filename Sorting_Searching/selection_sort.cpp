#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int min_selected = A[i];
        int loc_min_ele = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < min_selected) {
                min_selected = A[j];
                loc_min_ele = j;
            }
        }
        swap (A[i], A[loc_min_ele]);

        cout << "Pass " << i + 1 << ": ";

        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }

        cout << ", min_selected = " << min_selected << '\n';

    }
    return 0;
}