#include <bits/stdc++.h>
using namespace std;

int main() {

    string inp;
    int n, l;
    while (cin >> inp) {
        cin >> n;
        while (n--) {
            cin >> l;
            cout << inp[l - 1];
        }
        cout << endl;
    }
    return 0;
}