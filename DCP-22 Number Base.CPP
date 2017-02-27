#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long int N;
        int B;
        scanf("%lld,%d", &N, &B);
        char p[32];
        int i = 0;
        if(N == 0) {
            printf("0");
        }
        while(N > 0) {
            if((N%B) > 9)
                p[i] = (char)((N%B) +'A'-10);
            else
                p[i] = (char)((N%B)+'0');
            N /= B;
            i++;
        }
        i--;
        while(i >= 0) {
            printf("%c", p[i]);
            i--;
        }
        cout << endl;
    }
    return 0;
}
