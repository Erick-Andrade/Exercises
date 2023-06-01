#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, total = 240, qtd = 0;
    cin >> n >> k;
    total -= k;

    for (int i = 1; i <= n; i++) {
        int time = 5 * i;
        if (total - time >= 0) {
            qtd++;
            total -= time;
        } else {
            break;
        }
    }
    cout << qtd << endl;

    return 0;
}