#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, x, total = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> x;
        total += x;
    }

    total %= n;
    int qtd = n - total;
    
    for (int i = 1; i <= n; i++) {

        if (i - 1 == total) {
            qtd = 0;
        } else if (qtd > 20) {
            qtd = -1;
        } else if (qtd == 0) {
            qtd = -1;
        }

        cout << qtd << endl;
        qtd++;
    }

    return 0;
}