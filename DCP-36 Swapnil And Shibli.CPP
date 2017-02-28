#include<bits/stdc++.h>
using namespace std;
int main() {
    int T, TC = 0;
    cin >> T;
    while(T--) {
        int a[3], b[3];
        for(int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < 3; i++) {
            cin >> b[i];
        }
        sort(a, a+3);
        sort(b, b+3);
        if(a[0] <= b[0] && a[2] > b[0]) {
            cout << "Case " << ++TC << ": Both can win" << endl;
        }
        else if(a[0] > b[2]) {
            cout << "Case " << ++TC << ": Swapnil wins" << endl;
        }
        else {
            cout << "Case " << ++TC << ": Shibli wins" << endl;
        }
    }
    return 0;
}
