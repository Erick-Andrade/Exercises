#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        char res = '+';
        cin >> a >> b >> c;
        if (c == a - b) {
            res = '-';
        }

        cout << res << endl;
    }

    return 0;
}