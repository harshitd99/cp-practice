#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector <long long> a(N);

    long long xor_arr = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
        xor_arr ^= a[i];
    }
    
    long long mask = xor_arr & (-xor_arr);

    long long group1 = 0;
    long long group2 = 0;
    for (long long x : a) {
        if (x & mask) {
            group1 ^= x;
        }
        else {
            group2 ^= x;
        }
    }

    if (group1 > group2) swap(group1, group2);
 
    cout << group1 << " " << group2 << '\n';

    return 0;
}






//////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     vector<long long> a(N);

//     for (int i = 0; i < N; i++) {
//         cin >> a[i];
//     }

//     long long xor_arr = 0;

//     for (long long x : a) {
//         xor_arr ^= x;
//     }

//     int pos = -1;

//     for (int i = 0; i < 64; i++) {
//         if (xor_arr & (1LL << i)) {
//             pos = i;
//             break;
//         }
//     }

//     long long group1 = 0;
//     long long group2 = 0;

//     for (long long x : a) {
//         if (x & (1LL << pos))
//             group1 ^= x;
//         else
//             group2 ^= x;
//     }

//     cout << group1 << " " << group2 << '\n';

//     return 0;
// }