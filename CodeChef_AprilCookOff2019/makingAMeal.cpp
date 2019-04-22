#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int array[26] = {0};
		for(int i = 0; i < N; i++) {
			string A;
			cin >> A;
			for(int j = 0; j < A.length(); j++) {
				array[A[j] - 'a']++;
			}
		}
		array[2] /= 2;
		array[4] /= 2;
		int min = array[2];
		if(array[3] < min) min = array[3];
		if(array[4] < min) min = array[4];
		if(array[5] < min) min = array[5];
		if(array[7] < min) min = array[7];
		if(array[14] < min) min = array[14];
		cout << min << endl;
	}
}