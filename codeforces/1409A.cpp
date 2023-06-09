#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        int a, b, qtd = 0;
        cin >> a >> b;

        if (a > b) {
            a -= b;
            qtd = ceil(a / 10.0);
        } else if (a < b) {
            b -= a;
            qtd = ceil(b / 10.0);
        }

        cout << qtd << endl;
    }
    return 0;
}