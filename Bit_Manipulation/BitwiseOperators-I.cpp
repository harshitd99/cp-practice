#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long A, B;
    cin >> A >> B;

    cout << (A & B) << " " << (A | B) << " " << (A ^ B); 

    return 0;
}