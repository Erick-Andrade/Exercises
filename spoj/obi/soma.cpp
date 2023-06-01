#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, soma, num;
    cin >> n;
    while (n--) {
        cin >> num;
        soma += num;
    }

    cout << soma << endl;
    return 0;
}