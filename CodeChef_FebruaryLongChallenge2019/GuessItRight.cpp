#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll int fast_pow(ll int x, ll int y, ll int p)
{
  ll int res = 1;
  while (y > 0)
  {
    if (y & 1) {
      res = (res * x);
      if (res >= p) res %= p;
    }
    y = y >> 1;
    x = (x * x);
    if(x >= p) x %= p;
  }
  return res;
}
ll int findMMI_fermat(int n, ll int M)
{
  return fast_pow(n, M - 2, M);
}
ll int probability(int N, int K, int M) {
  if (M == 1) {
    //ll int temp = findMMI_fermat(N, mod);
    //cout << temp << "\n";
    return findMMI_fermat(N, mod);
  }
  else {
    /*ll int temp = (findMMI_fermat(N, mod) + ((((N - 1) * findMMI_fermat(N, mod)) % mod) * probability(N + K, K, M - 1)) % mod) % mod;
    cout << temp << "\n";
    return temp;*/
    ll int a = findMMI_fermat(N, mod);
    ll int b = ((N - 1) * a);
    if (b > mod) b%= mod;
    if (M % 2 != 0) {
      ll int ans = a;
      for (ll int i = 0; i < (M / 2); i++) {
        ans = (a + (b * ans));
        if (ans >= mod)
          ans %= mod;
      }
      return ans;
    }
    else {
      ll int ans = findMMI_fermat(N + K, mod);
      for (ll int i = 0; i < (M / 2); i++) {
        ans = (a + (b * ans));
        if (ans >= mod)
          ans %= mod;
      }
      return ans;
    }
  }
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, K, M;
    cin >> N >> K >> M;
    cout << probability(N, K, M) << "\n";
  }
}