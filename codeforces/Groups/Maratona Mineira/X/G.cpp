#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, copos[] = {0, 1, 0};
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        int aux = copos[a - 1];
        copos[a - 1] = copos[b - 1];
        copos[b - 1] = aux;
    }

    for (int i = 0; i < 3; i++) {
        if (copos[i] == 1) {
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}