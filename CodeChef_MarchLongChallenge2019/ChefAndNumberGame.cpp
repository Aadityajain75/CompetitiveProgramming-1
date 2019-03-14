#include <iostream>
#define ll long long
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        ll int N;
        cin >> N;
        ll int array[N];
        for (ll int i = 0; i < N; i++) {
            cin >> array[i];
        }
        ll int positive = 0;
        ll int negative = 0;
        for (ll int i = 0; i < N; i++) {
            if (array[i] < 0) negative++;
            else positive++;
        }
        if (positive == 0) {
            cout << negative << " " << negative << '\n';
        }
        if (negative == 0) {
            cout << positive << " " << positive << '\n';
        }
        else {
            cout << max(positive, negative) << " " << min(positive, negative) << '\n';
        }
    }
}