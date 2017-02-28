#include<bits/stdc++.h>
using namespace std;
long long int fact(int);
int main() {
    int T;
    cin >> T;
    while(T--) {
        char str[21];
        int strcount[26] = {0};
        cin >> str;
        int len = strlen(str);
        for(int i = 0; i < len; i++) {
            strcount[str[i]-'a']++;
        }
        long long int permutation = fact(len);
        for(int i = 0; i < 26; i++) {
            if(strcount[i] > 1) permutation /= fact(strcount[i]);
        }
        cout << permutation << endl;
    }
    return 0;
}
long long int fact(int n) {
    if(n == 1) return 1;
    else return n*fact(n-1);
}
