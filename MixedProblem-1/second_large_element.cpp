#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n; 

        vector<long long> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];   //  5 6 1 2 3 4
        }

        int l = 0, r = n - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (arr[mid] <= arr[r]) {
                // min is at mid or at left half
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }
        
        cout << l << '\n';
    }

    return 0;
}