#include<bits/stdc++.h>
#define gridSiZE 15
using namespace std;
long long grid[gridSiZE+1][gridSiZE+1];
int main() {
    for(int i = 0; i < gridSiZE; i++) {
        grid[i][gridSiZE] = 1;
        grid[gridSiZE][i] = 1;
    }
    for(int i = gridSiZE-1; i >= 0; i--) {
        for(int j = gridSiZE-1; j >= 0; j--) {
            grid[i][j] = grid[i+1][j] + grid[i][j+1];
        }
    }
    int T;
    cin >> T;
    while(T--) {
        int X, Y;
        cin >> X >> Y;
        cout << grid[15-X][15-Y] << endl;
    }
    return 0;
}
