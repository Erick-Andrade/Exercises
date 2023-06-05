#include <bits/stdc++.h>

using namespace std;

int main() {

    int c, n;
    cin >> c;

    while (c--) {
        cin >> n;
        if (n <= 8000) {
            cout << "Inseto!" << endl;
        } else {
            cout << "Mais de 8000!" << endl;
        }
    }

    return 0;
}