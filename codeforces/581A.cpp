#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, r;
    cin >> a >> b;

    r = min(a, b);
    
    cout << r << " ";
    a = a - r, b = b - r;
    r = a / 2 + b / 2;
    
    cout << r << endl;
    return 0;
}