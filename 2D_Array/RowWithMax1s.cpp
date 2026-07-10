#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    int best_row = -1;
    int max_column = 0;
    for (int i = 0; i < n; i++) {
        int count1 = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1){
                count1++;
            }
        }
        if(count1 > max_column ) {
            max_column = count1;
            best_row = i;
        }
    }

    cout << best_row << '\n';

    return 0;
}