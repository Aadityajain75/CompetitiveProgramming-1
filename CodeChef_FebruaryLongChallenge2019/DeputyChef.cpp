#include <bits/stdc++.h>
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
    int N;
    cin >> N;
    int attack[N];
    int defence[N];
    for (int i = 0; i < N; i++) {
      cin >> attack[i];
    }
    for (int i = 0; i < N; i++) {
      cin >> defence[i];
    }
    if (attack[N - 1] + attack[1] >= defence[0]) {
      defence[0] = -1;
    }
    if (attack[N - 2] + attack[0] >= defence[N - 1]) {
      defence[N - 1] = -1;
    }
    for (int i = 1; i < N - 1; i++) {
      if (attack[i - 1] + attack[i + 1] >= defence[i]) {
        defence[i] = -1;
      }
    }
    int max = -1;
    for (int i = 0; i < N; i++) {
      if (defence[i] > max) {
        max = defence[i];
      }
    }
    cout << max << endl;
  }
}