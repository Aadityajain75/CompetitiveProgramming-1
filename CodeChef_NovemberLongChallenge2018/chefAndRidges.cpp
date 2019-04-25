#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int array[25];
    array[0] = 1;
    for (int i = 1; i < 25; i++) {
        if (i % 2 == 1) {
            array[i] = (2 * array[i - 1]) - 1;
        }
        if (i % 2 == 0) {
            array[i] = (2 * array[i - 1]) + 1;
        }
    }
    long long int T;
    cin >> T;
    while (T--) {
        long long int N;
        cin >> N;
        long long int temp = pow (2, N);
        cout << array[N - 1] << " " << temp << " ";
    }
}