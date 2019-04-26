#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main() {
    long int N, Q, K;
    cin >> N >> Q >> K;
    int A[N + Q];
    string B;
    for (long int i = N - 1; i >= 0; i--) {
        cin >> A[i];
    }
    cin >> B;
    long int ansarray[Q] = {0};
    long int rscnt = 0;
    long int ei = 0;
    long int si = N - 1;
    long int lans = 0;
    long int rans = 0;
    for (long int i = si; A[i] == 1; lans++, i--) {}
    for (long int i = ei; A[i] == 1; rans++, i++) {}
    long int ans = 0;
    long int secans = 0;
    long int tempans = 0;
    for (long int i = si; i >= ei; i--) {
        if (A[i] == 1) {
            tempans++;
            if (tempans > ans) {
                ans = tempans;
                //cout << "Ans =" << ans << endl;
            }
        }
        if (A[i] == 0) {
            tempans = 0;
        }
    }
    // cout << ans << " " << secans << endl;
    ansarray[0] = min(K, ans);
    for (long int i = 0; i < Q; i++) {
        if (B[i] == '!') {
            si++;
            A[si] = A[ei];
            ei++;
            rscnt++;
            if (ansarray[rscnt % N] != 0) {
                ans = ansarray[rscnt % N];
            }
            else {
                if (A[si] == 0) {
                    lans = 0;
                    rans = 0;
                    for (long int i = ei; A[i] == 1; rans++, i++) {}
                }
                else {
                    lans++;
                    rans--;
                    if (rans + 1 == ans) {
                        ans = 0;
                        tempans = 0;
                        for (long int i = si - lans; i >= ei + rans ; i--) {
                            if (A[i] == 1) {
                                tempans++;
                                if (tempans > ans) {
                                    ans = tempans;
                                    //cout << "Ans =" << ans << endl;
                                }
                            }
                            if (A[i] == 0) {
                                tempans = 0;
                            }
                        }
                        if (ans != rans + 1) {
                            ans = rans;
                        }
                    }
                }
                ans = max(ans, lans);
                ansarray[rscnt % N] = ans;
            }
        }
        else {

            // for (int i = si; i >= ei; i--) {
            //     cout << A[i] <<" ";
            // }
            cout << min(ans, K) << endl;
        }
    }
}
