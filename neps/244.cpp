#include <bits/stdc++.h>

using namespace std;

int main() {

    // Exercício: Estratégia Gulosa
    int i = 0, v, notas[] = {100, 50, 25, 10, 5, 1}, total = 0;
    cin >> v;
    
    while (v != 0) {
        while (notas[i] <= v) {
            v -= notas[i];
            total++;
        }
        i++;
    }

    cout << total << endl;
    return 0;
}