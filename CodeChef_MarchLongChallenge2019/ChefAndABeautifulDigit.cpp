#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int T;
    while (T--) {
        ll int N, d;
        cin >> N >> d;
        string temp = to_string(N);
        string ans;
        int l = 0;
        int r = temp.size();
        while (l < r && l != -1) {
            int min = 10;
            for (int i = l; i < r; i++) {
                if (temp[i] - '0' < min) {
                    min = temp[i];
                    l = i;
                }
            }
            if (min - '0' < d) {
                ans += min;
            }
            else {
                l = -1;
            }
        }
        while (ans.size() != temp.size()) {
            ans += to_string(d);
        }
        cout << ans << endl;
    }
}