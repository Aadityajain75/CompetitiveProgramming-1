#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll int t;
	cin >> t;
	while(t--) {
		ll int N;
		cin >> N;
		string A;
		cin >> A;
		char a;
		cin >> a;
		ll int findex = -1;
		ll ans = 0;
		for(ll int i = 0; i < N; i++) {
			if(A[i] == a) {
				ans += i + 1;
				ans += (findex + 1) * ((i - 1) - findex);
				findex = i;
			}
		}
		if(findex != N - 1) {
			ans+= (findex + 1) * ((N - 1) - findex);
		}
		cout << ans << endl;
	}
}
