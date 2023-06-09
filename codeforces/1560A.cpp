#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, k, sequence[1001], num = 1;
    cin >> t;

    for (int i = 0; i < 1000; i++) {
        if (num % 3 == 0 or num % 10 == 3) {
            while (num % 3 == 0 or num % 10 == 3) {
                num++;
            }
        }
        sequence[i] = num;
        num++;
    }


    while (t--) {
        cin >> k;
        cout << sequence[k - 1] << endl;
    }

    return 0;
}