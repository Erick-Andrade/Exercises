#include <bits/stdc++.h>

using namespace std;

int main() {

    int c, pos = 1;
    for (int i = 0; i < 4; i++) {
        cin >> c;
        if (c == 1) {
            pos = i + 1;
        }
    }

    cout << pos << endl;

    return 0;
}