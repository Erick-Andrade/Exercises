#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p;
    cin >> n >> p;

    while (n != 0 and p != 0) {

        int total = n / p;
        if (n % p != 0) total++;
        string res;
        if (total > 6) {
            if (total > 20) {
                total = 20;
            }
            int totalO = total - 4;
            res = "P";
            for (int i = 0 ; i < totalO; i++) res += "o";
            res += "dle";
        } else {
            res = "Poodle";
        }
        cout << res << endl;
        cin >> n >> p;
    }
    return 0;
}