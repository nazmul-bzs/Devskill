#include<bits/stdc++.h>
using namespace std;
int main() {
    int CT, N;
    while(cin >> CT >> N) {
        int s = 0, p;
        for(int i = 0; i < N; i++) {
            cin >> p;
            s += p;
        }
        int d = CT/s;
        if(CT%s != 0) d += 1;
        cout << "Project will finish within " << d << " day";
        if(d > 1) cout << "s";
        cout << "." << endl;
    }
    return 0;
}
