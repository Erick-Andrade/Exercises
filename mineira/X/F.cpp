#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, m, maior = 1, qtd = 1;
    cin >> n >> m;

    int** matrix = new int*[n];

    for (int i = 0; i < n; i++) matrix[i] = new int[m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];   
        }
    }

    for (int i = 0; i < n; i++) {
        qtd = 1;
        for (int j = 0; j < m - 1; j++) {
            if (abs(matrix[i][j] - matrix[i][j + 1]) <= 1) {
                qtd++;
                if (qtd > maior) maior = qtd;
            } else {
                if (qtd > maior) maior = qtd;
                qtd = 1;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        qtd = 1;
        for (int i = 0; i < n - 1; i++) {
            if (abs(matrix[i][j] - matrix[i + 1][j]) <= 1) {
                qtd++;
                if (qtd > maior) maior = qtd;
            } else {
                if (qtd > maior) maior = qtd;
                qtd = 1;
            }
        }
    }
    cout << maior << endl;
    return 0;
}