#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, qtd = 0;
    cin >> n;
    cin.get();
    string cmp = "codeforces", inp;

    while (n--) {
        qtd = 0;
        getline(cin, inp);
        for (int i = 0; i < (int) inp.size(); i++) {
            if (inp[i] != cmp[i]) qtd++;
        }

        cout << qtd << endl;
    }


    return 0;
}