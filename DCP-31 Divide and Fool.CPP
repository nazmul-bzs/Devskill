#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int X, Y, P;
        cin >> X >> Y >> P;
        cout << X/Y << ".";
        for(int i = 0; i < P; i++){
            X = (X%Y)*10;
            cout << X/Y;
        }
        cout << endl;
    }
    return 0;
}
