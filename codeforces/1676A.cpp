#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, sumfirst, sumlast;
    string inp;
    cin >> t;
    while (t--) {
        sumfirst = sumlast = 0;
        cin >> inp;
        for (int i = 0; i < 6; i++) {
            if (i <= 2) {
                sumfirst += inp[i] - 48;
            } else {
                sumlast += inp[i] - 48;
            }
        }

        if (sumfirst == sumlast) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    
    }
    return 0;
}