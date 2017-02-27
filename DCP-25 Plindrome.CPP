#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T--) {
        char a[100];
        cin >> a;
        int len = strlen(a);
        for(int i = 0; i < len; i++) {
            if(islower(a[i])) {
                a[i] = toupper(a[i]);
            }
        }
        bool check = true;
        int i, j;
        for(i = 0, j = len-1; i < len, j >= 0; i++, j--) {
            if(a[i] != a[j]) {
                check = false;
                break;
            }
        }
        if(check)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
