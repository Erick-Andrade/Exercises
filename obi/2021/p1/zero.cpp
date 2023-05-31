#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, num, total = 0;
    vector<int> numeros;
    cin >> n;

    while (n--) {
        cin >> num;
        if (num != 0) {
            numeros.push_back(num);
        } else {
            if (!numeros.empty()) {
                numeros.pop_back();
            }
        }
    }

    for (int i = 0; i < (int) numeros.size(); i++) {
        total += numeros[i];
    }

    cout << total << endl;
    return 0;
}