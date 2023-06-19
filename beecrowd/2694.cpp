#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, sum;
    string inp;
    cin >> n;
    while (n--) {
        sum = 0;
        cin.sync();
        cin >> inp;
        sum += stoi(inp.substr(2, 2));
        sum += stoi(inp.substr(5, 3));
        sum += stoi(inp.substr(11, 2));
        cout << sum << endl;
    }
    return 0;
}