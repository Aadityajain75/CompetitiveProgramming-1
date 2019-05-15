#include <iostream>
using namespace std;
int main() {
    int T; //Integer stores value from -32,767 to 32,767
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, A, B;
        cin >> N >> A >> B;
        int array[N];
        for (int j = 0; j < N; j++) {
            cin >> array[j];
        }
        int cntA = 0;
        for (int j = 0; j < N; j++) {
            if (array[j] == A) {
                cntA++;
            }
        }
        int cntB = 0;
        for (int j = 0; j < N; j++) {
            if (array[j] == B) {
                cntB++;
            }
        }
        cout << ((double)(cntA * cntB))/((double)(N * N)) << endl;
    }
}