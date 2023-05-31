#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;
    vector<int> predios(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> predios[i];
    }

    int total = 0, maior = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            total = 0;
            if (j != i) {
                total = predios[i] + predios[j] + abs(i - j);
                if (total > maior) {
                    maior = total;
                }
            }
        }
    }
    cout << maior << endl;

    return 0;
}