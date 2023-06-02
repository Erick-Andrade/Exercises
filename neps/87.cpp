#include <bits/stdc++.h>

using namespace std;

int main() {

    // Exercício: Flíper
    int p, r;
    char resposta = 'C';
    cin >> p >> r;
    if (p == 1) {
        resposta = (r == 1) ? 'A': 'B';
    }
    cout << resposta << endl;
    return 0;
}