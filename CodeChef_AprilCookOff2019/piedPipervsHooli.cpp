#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--) {
		ll int N, A, B, X, Y, Z;
		cin >> N >> A >> B >> X >> Y >> Z;
		vector<ll int> array;
		for(ll int i = 0; i < N; i++) {
		    ll int temp1;
			cin >> temp1;
			array.push_back(temp1);
		}
		make_heap(array.begin(), array.end());
		ll int hDays = (Z-B) / Y;
		if((Z-B) % Y != 0) {
			hDays++;
		}
		ll int extraWork = (Z - A) - (X * (hDays - 1));
		if(extraWork <= 0) {
		    cout << "0" << endl;
		    continue;
		}
		ll int contributions = 0;
		bool flag = true;
		while(extraWork > 0) {
			ll int temp = array.front();
			if(temp == 0) {
				flag = false;
				break;
			}
			pop_heap(array.begin(), array.end()); 
			array.pop_back(); 
			array.push_back(temp / 2);
			push_heap(array.begin(), array.end());
			extraWork -= temp;
			contributions++;
		}
		if(flag == false) {
			cout << "RIP" << endl;
			continue;
		}
		else{
			cout << contributions << endl;
		}
	}
}