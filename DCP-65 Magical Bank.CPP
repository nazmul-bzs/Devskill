#include<bits/stdc++.h>
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int x;
        float r;
        scanf("%d", &x);
        r = (-1.0+sqrt(1.0+8.0*x))/2.0;
        if(r == (int)r) x = (int)r;
        else x = (int)r + 1;
        printf("%d\n", x);
    }
}
