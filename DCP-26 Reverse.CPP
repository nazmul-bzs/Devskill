#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    scanf("%d\n", &T);
    while(T--) {
        char a[1000];
        int i = 0;
        while(true) {
            char ch;
            scanf("%c", &ch);
            if(ch == '\n') break;
            a[i] = ch;
            i++;
        }
        for(int j = i-1; j >= 0; j--) {
            printf("%c", a[j]);
        }
        cout << endl;
    }
    return 0;
}
