#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int target;
    cin >> target;

    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == target) {
            count++;
        }
    }
    cout << count << '\n'; 
    
    return 0;
}