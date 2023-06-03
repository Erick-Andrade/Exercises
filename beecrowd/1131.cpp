#include <bits/stdc++.h>

using namespace std;

int main() {

    int op, gols_inter, gols_gremio, resultados[3] = {0}, qtd = 0;
    
    do {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> gols_inter >> gols_gremio >> op;
        
        if (gols_inter > gols_gremio) {
            resultados[0]++;
        } else if (gols_gremio > gols_inter) {
            resultados[1]++;
        } else {
            resultados[2]++;
        }
        qtd++;
    } while (op != 2);


    cout << qtd << " grenais" << endl;
    cout << "Inter:" << resultados[0] << endl;
    cout << "Gremio:" << resultados[1] << endl;
    cout << "Empates:" << resultados[2] << endl;
    
    if (resultados[0] > resultados[1]) {
        cout << "Inter venceu mais" << endl;
    } else if (resultados[1] > resultados[0]) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }
    
    return 0;
}