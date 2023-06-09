#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int val[4], qtd = 0;
        for (int i = 0; i < 4; i++) cin >> val[i];
        for (int i = 1; i < 4; i++) {
            if (val[0] < val[i]) {
                qtd++;
            }
        }
        cout << qtd << endl;
    }
    return 0;
}