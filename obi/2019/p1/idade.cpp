#include <bits/stdc++.h>

using namespace std;


int main() {

    int m, a, b, c, maisVelho;
    cin >> m >> a >> b;
    c = m - (a + b);
    maisVelho = a;
    if (b > maisVelho) maisVelho = b;
    if (c > maisVelho) maisVelho = c;

    cout << maisVelho << endl;

    return 0;
}