#include <bits/stdc++.h>
#define ll long long
#define num 1000000000
using namespace std;
void terminate (ll int x) {
  if (x < 0) {
    exit(0);
  }
}
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
  ll int T;
  cin >> T;
  while (T--) {
   ll int a, b, c , d, e, ans;
   cout << "Q " << 0 << " " << 0 << "\n" << flush;
   cin >> a; // a = xl + yl
   cout << "Q " << num << " " << 0 << "\n" << flush;
   cin >> b; // b = 10^9 - xu + yl
   cout << "Q " << num << " " << num << "\n" << flush;
   cin >> c; // c = 10^9 - xu + 10^9 - yu
   cout << "Q " << 0 << " " << num << "\n" << flush;
   cin >> d; // d = xl + 10^9 - yu
   cout << "Q " << ((a - b) + num) / 2 << " " << 0 << "\n" << flush; // a - b + num / 2 = xl + xu / 2
   cin >> e; // e = yl
   ll int p, q, r, s;
   p = a - e;
   q = e;
   r = e + num - b;
   s = p + num - d;
   cout << "A " << p << " " << q << " " << r << " " << s <<"\n" << flush;
   cin >> ans;
  }
}