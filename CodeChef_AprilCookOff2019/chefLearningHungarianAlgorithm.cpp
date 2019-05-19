#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int T; //testCases
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int array[N][N];
		for(int i  = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				cin >> array[i][j];
			}
		}
		bool flag;
		for(int i = 0; i < N; i++) {
			flag = false;
			for(int j = 0; j < N; j++) {
				if(array[i][j] == 0) {
					flag = true;
					break;
				}
			}
			if(flag == false) break;
		}
		if(flag == false) {
			cout << "NO" << endl;
			continue;
		}
		for(int j = 0; j < N; j++) {
			flag = false;
			for(int i = 0; i < N; i++) {
				if(array[i][j] == 0) {
					flag = true;
					break;
				}
			}
			if(flag == false) break;
		}
		if(flag == false) {
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;

	}
}
