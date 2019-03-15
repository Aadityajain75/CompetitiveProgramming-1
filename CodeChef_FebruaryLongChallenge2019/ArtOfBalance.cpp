#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long int gcd(long long int a, long long int b)
{
  if (a == 0 || b == 0)
    return 0;
  if (a == b)
    return a;
  if (a > b)
    return gcd(a - b, b);
  return gcd(a, b - a);
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    ll int farray[26] = {0};
    string S;
    cin >> S;
    ll int len = S.length();
    for (int i = 0; i < len; i++) {
      farray[S.at(i) - 'A']++;
    }
    int cnt = 0;
    ll int sum = 0;
    ll int sum1 = 0;
    ll int sum2 = 0;
    ll int lcnt = 0;
    ll int ucnt = 0;
    for (int i = 0; i < 26; i++) {
      if (farray[i] != 0) {
        cnt++;
      }
    }
    //cout << len << " " << cnt << endl;
    if (len % cnt != 0) {
      for (int i = cnt - 1; i >= 2; i--) {
        if (len % i == 0) {
          lcnt = i;
          break;
        }
      }
      for (int i = cnt + 1; i <= 26; i++) {
        if (len % i == 0) {
          ucnt = i;
          break;
        }
      }
      if (lcnt == 0) {
        lcnt = 1;
      }
      if (ucnt == 0) {
        ucnt = -1;
        sum2 = 100000000000000000;
      }
      //cout << lcnt << " " << ucnt << endl;
      int tempcnt1 = 0;
      ll int tarray1[cnt];
      for (int i = 0; i < 26; i++) {
        if (farray[i] != 0) {
          tarray1[tempcnt1] = farray[i];
          tempcnt1++;
        }
      }
      sort(tarray1, tarray1 + cnt);
      for (int i = 0; i < cnt - lcnt; i++) {
        sum1 += tarray1[i];
      }
      for (int i = cnt - lcnt; i < cnt; i++) {
        if (tarray1[i] - (len / lcnt) > 0)
          sum1 += tarray1[i] - (len / lcnt);
      }
      //cout << sum1 << endl;
      if (ucnt != -1) {
        int tempcnt2 = 0;
        ll int tarray2[cnt];
        for (int i = 0; i < 26; i++) {
          if (farray[i] != 0) {
            tarray2[tempcnt2] = farray[i];
            tempcnt2++;
          }
        }
        for (int i = 0; i < cnt; i++) {
          if (tarray2[i] - (len / ucnt) > 0)
            sum2 += tarray2[i] - (len / ucnt);
        }
      }
      sum = min(sum1, sum2);
      //cout << sum2 << endl;
    }
    else {
      int tempcnt = 0;
      ll int tarray[cnt];
      for (int i = 0; i < 26; i++) {
        if (farray[i] != 0) {
          tarray[tempcnt] = farray[i];
          tempcnt++;
        }
      }
      for (int i = 0; i < cnt; i++) {
        if (tarray[i] - (len / cnt) > 0) {
          sum += tarray[i] - (len / cnt);
        }
      }
    }
    cout << sum << "\n";
  }
}