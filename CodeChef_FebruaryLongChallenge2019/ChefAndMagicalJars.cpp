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
    ll int N;
    cin >> N;
    ll int jars[N];
    ll int sum = 0;
    for (int i = 0; i < N; i++) {
      cin >> jars[i];
      sum += jars[i] - 1;
    }
    cout << sum + 1 << "\n";
  }
}