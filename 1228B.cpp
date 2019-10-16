#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e3;
const int mod = 1000000007;
int grid[MAXN][MAXN];

int main() {
    int h, w; cin >> h >> w;
    for(int i = 0; i < h; i++) {
        int r; cin >> r;

        if(r == 0) grid[i][0] = 2;
        else if(r < w) grid[i][r] = 2;

        for(int j = 0; j < r; j++) {
            grid[i][j] = 1;
        }
    }

    for(int j = 0; j < w; j++) {
        int c; cin >> c;

        if(c == 0) grid[0][j] = 2;
        else if(c < h) grid[c][j] = 2;

        for(int i = 0; i < c; i ++) {
            if(grid[i][j] == 2) {
                cout << 0;
                return 0;
            }
            grid[i][j] = 1;
        }
    }

    unsigned long long enabled = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(grid[i][j] == 0) enabled++;
        }
    }

    enabled = pow(2, enabled);
    unsigned long long ans = enabled%mod;
    cout << ans << endl;

    return 0;
}