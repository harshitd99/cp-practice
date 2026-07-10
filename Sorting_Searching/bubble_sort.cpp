#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < n; i++) {

        int temp = A[i];
        int j = i - 1;
        int shifts = 0;

        while (j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            shifts++;
            j--;
        }

        A[j + 1] = temp;

        cout << "Pass " << i << ": ";

        // Entire array
        for (int k = 0; k < n; k++)
            cout << A[k] << " ";

        cout << ", ";

        // Sorted portion
        for (int k = 0; k <= i; k++)
            cout << A[k] << " ";

        cout << "| ";

        // Unsorted portion
        for (int k = i + 1; k < n; k++)
            cout << A[k] << " ";

        cout << ", shifts = " << shifts << '\n';
    }

    return 0;
}