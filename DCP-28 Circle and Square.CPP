#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        float R, S;
        cin >> R >> S;
        if(abs(2*R-1.414*S) > .022) printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
