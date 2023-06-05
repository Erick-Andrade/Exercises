#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, pos[8], comemoracao;
    cin >> n;
    
    for (int i = 0; i < 8; i++) {
        pos[i] = i + 1;
    }

    for (int j = 0; j < n; j++) {
        cin >> comemoracao;
        for (int i = 0; i < 8; i++) {
            if (pos[i] == comemoracao) {
                int aux = pos[i];
                pos[i] = pos[i - 1];
                pos[i - 1] = aux;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << pos[i] << " ";
    }

    cout << endl;
    return 0;
}