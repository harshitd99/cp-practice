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
    for (int i = 0; i < n; i++) {
        
        if (A[i] == x) {
            flag = true;
            break;
        }
// use this only if array is sorted 

        // if (A[i] > x) {
        //     break;
        // }
    }

    if (flag) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}