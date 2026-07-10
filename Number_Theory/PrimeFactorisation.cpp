// prime factor

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            cout << i << "^" << cnt << " ";
        }
    }

    if (n > 1) {
        cout << n << "^1";
    }

    return 0;
}

// prime unique factor count //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     long long n;
//     cin >> n;
    
//     int count = 0;
    
//     for (long long i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//             while (n % i == 0) {
//                 n /= i;
//             }
//         }
//     }
    
//     if (n > 1) count++;
    
//     cout << count << '\n';
    
//     return 0;
// }