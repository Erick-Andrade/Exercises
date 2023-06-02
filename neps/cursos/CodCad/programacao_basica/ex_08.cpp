#include <bits/stdc++.h>

using namespace std;

int main() {

    // Positivo, Negativo ou Nulo
    int x;
    cin >> x;
    if (x == 0) {
        cout << "nulo" << endl;
    } else if (x > 0) {
        cout << "positivo" << endl;
    } else {
        cout << "negativo" << endl;
    }
}