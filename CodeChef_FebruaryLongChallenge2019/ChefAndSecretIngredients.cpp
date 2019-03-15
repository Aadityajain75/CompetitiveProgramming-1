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
    int cnt = 0;
    int farray[26] = {0};
    string array[N];
    for (int i = 0; i < N; i++) {
      cin >> array[i];
    }
    for (int i = 0; i < N; i++) {
      int tfarray[26] = {0};
      for (int j = 0; j < array[i].length(); j++) {
        if(tfarray[(array[i].at(j) - 'a')] == 0) {
          tfarray[(array[i].at(j) - 'a')] = 1;
        }
      }
      for (int j = 0; j < 26; j++) {
        if(tfarray[j] == 1) {
          farray[j] += 1;
        }
      }
    }
    for (int i = 0; i < 26; i++) {
      if (farray[i] == N) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
}