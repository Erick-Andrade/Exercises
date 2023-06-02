#include <bits/stdc++.h>

using namespace std;

int main() {

    int num;
    string hex = "0123456789ABCDEF";
    vector<char> algarismos;
    cin >> num;

    
    while (num != 0) {
        int res = num % 16;
        num /= 16;
        algarismos.push_back(hex[res]);
    }

    for (int i = (int) algarismos.size() - 1; i >= 0; i--) {
        cout << algarismos[i];
    }

    cout << endl;

    return 0;
}