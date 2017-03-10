#include<bits/stdc++.h>
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int N;
        long long ms = 0, ys = 0;
        scanf("%d", &N);
        for(int i = 0; i < N; i++) {
            int ai;
            scanf("%d", &ai);
            ys += ai;
            if(ai-i >= 0) ms += (ai-i);
        }
        printf("%lld\n", ys-ms);
    }
    return 0;
}
