#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, qtd = 0, num;
    vector<string> numeros;
    cin >> n;
    while (n--) {
        cin >> num;
        int qtd_algarismos = to_string(num).size();
        
        for (int i = 0; i < qtd_algarismos; i++) {
            int algarismo = num % 10;
            num /= 10;

            if (algarismo != 0) {
                string numero = to_string(algarismo);
                for (int j = 0; j < i; j++) {
                    numero += '0';
                }
                qtd++;
                numeros.push_back(numero);
            }
        }
        cout << qtd << endl;
        for (int i = 0; i < (int) numeros.size(); i++) {
            cout << numeros[i] << " ";
        }
        cout << endl;
        numeros.clear();
        qtd = 0;
    }

    return 0;
}