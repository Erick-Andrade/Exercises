#include <bits/stdc++.h>

using namespace std;
#define picc pair<int, pair<char, char>>

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, n;
    string encrypted, decrypt;
    cin >> t;

    while (t--) {
        
        cin >> n >> encrypted;
        decrypt = encrypted[0];
        int size = 1;

        for (int i = 1; i < n; i++) {
            if (encrypted[i] == decrypt[size - 1]) {
                if (i + 1 < n) {
                    decrypt += encrypted[i + 1];
                    size++;
                    i++;
                }
            }
        }
        
        cout << decrypt << endl;
    }


    return 0;
}