#include <iostream>
#include<cmath>
#include <numeric>
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
    long long int N, K, A, B;
    cin >> N >> A >> B >> K;
    long long int proba = N/A;
    long long int probb = N/B;
    long long int probboth = N/((A*B)/gcd(A,B));
    if ((proba + probb) - (2*probboth) >= K) {
      cout << "Win\n";
    }
    else {
      cout << "Lose\n";
    }
  }
}