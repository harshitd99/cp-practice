#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int N;
        cin >> N;
    
        int a[N];
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        int c0 = 0, c1 = 0;
        for (int i = 0; i < N; i++) {
            if (a[i] == 0) {
                c0++;
            }
            else{
                c1++;
            }
        }
    
        for (int i = 1; i <= c0; i++) {
            cout << "0 ";
        }
        for (int i = 1; i <= c1; i++) {
            cout << "1 ";
        }
        cout << '\n';
    }  
    return 0;
}