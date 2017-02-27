#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    int a[10000] = {0};
    a[0] = 1;
    cin >> T;
    for(int i = 2; i <= 100; i++) {
        for(int j = i+1; j <= 10000; j++) {
            if(j%i == 0 && !a[j-1]) a[j-1] = 1;
        }
    }
    while(T--) {
        int N;
        cin >> N;
        if(!a[N-1])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
