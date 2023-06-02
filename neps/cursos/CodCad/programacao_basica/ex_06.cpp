#include <bits/stdc++.h>

using namespace std;

int main() {

    // Gangorra
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    int esquerda = p1 * c1, direita = p2 * c2;
    if (direita == esquerda) {
        cout << 0 << endl;
    } else if (esquerda > direita) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }
}