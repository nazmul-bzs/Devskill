#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, TC = 0;
	scanf("%d", &T);
	while(T--) {
		long long N;
		scanf("%lld", &N);
		if(N%2) {
			printf("Case #%d: %lld %lld %lld\n", ++TC, 3*N-2, 3*N-1, 3*N);
		}
		else {
			printf("Case #%d: %lld %lld %lld\n", ++TC, 3*N, 3*N-1, 3*N-2);
		}
	}
	return 0;
}
