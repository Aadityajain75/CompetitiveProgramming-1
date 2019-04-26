#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int flag = 0;
        long int N;
        cin >> N;
        long int array1[N];
        long int array2[N] = {0};
        long int array3[N];
        for (long int i = 0; i < N; i++) {
            cin >> array1[i];
            array2[array1[i] - 1]++;
        }
        for (long int i = 0; i < N; i++) {
            array3[i] = array2[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (array2[i] == 0) {
                int temp = array1[i];
                array3[temp - 1]--;
            }
        }
        for (int i = 0; i < N; i++)
        {
            if (array3[i] >= 2) {
                cout << "Truly Happy" << endl;
                flag = 1;
                break;
            }
        }
        if(!flag) {
            cout << "Poor Chef" << endl;
        }
    }
}