#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll int T;
	cin >> T;
	while(T--) {
		ll int N;
		cin >> N;
		string A;
		cin >> A;
		char a;
		cin >> a;
		ll int sp = 0;
		ll int ep = 0;
		ll int findex = 0;
		ll ans = 0;
		for(ll int i = 0; i < N; i++) {
			if(A[i] == a) {
				ans += i + 1;
				ans += (findex + 1) * (i - findex);
				findex = i;
			}
		}
		if(findex != N - 1) {
			ans+= (findex + 1) * (N - findex);
		}
		cout << ans << endl;
	}
}