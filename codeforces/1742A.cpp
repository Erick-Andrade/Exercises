#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a, b, c;
    string res;
    cin >> n;
    while (n--) {
        res = "NO";
        cin >> a >> b >> c;
        if (a + b == c) {
            res = "YES";
        } else if (a + c == b) {
            res = "YES";
        } else if (b + c == a) {
            res = "YES";
        }

        cout << res << endl;
    }
    return 0;
}