#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, n, inp, qtd, total;
    vector<int> array;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> inp;
            array.push_back(inp);
        }

        qtd = 0, total = 0;

        for (int i = 0; i < n; i++) {
            if (array[i] == 0) {
                qtd++;
                if (qtd > total) {
                    total = qtd;
                }
            } else {
                if (qtd > total) {
                    total = qtd;
                }
                qtd = 0;
            }
        }

        cout << total << endl;
        array.clear();
    }

    return 0;
}