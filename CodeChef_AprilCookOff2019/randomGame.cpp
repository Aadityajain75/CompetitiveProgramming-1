#include<bits/stdc++.h>
#define ll long long
using namespace std;
string A;
int main() {
	int T;
	cin >> T;
	while(T--) {
		ll int N;
		cin >> N;
		if(N % 2 == 1) {
			cout << "Win";
			fflush(stdout);
		}
		else {
			int temp = N;
			int ans = 0;
			while(temp % 2 == 0) {
				temp /= 2;
				ans++;
			}
			if(ans % 2 == 0) {
				cout << "Win";
				fflush(stdout);
			}
			else {
				cout << "Lose";
				fflush(stdout);
				cin >> A;
				continue;
			}
		}
		while(N != 1) {
			if(N % 2 == 0) {
				cout << "/2";
				fflush(stdout);
				N = N / 2;
			}
			if((N + 1) % 4 == 0) {
				N = N - 1;
				cout << "-1";
				fflush(stdout);
			}
			else {
				N = N + 1;
				cout << "+1";
				fflush(stdout);
			}
			cin >> A;

		}
		cout << "-1";
		fflush(stdout);
		cin >> A;
	}
}