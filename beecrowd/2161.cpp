#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    double res = 3, y = 1.0 / 6.0;
    cin >> n;


    for (int i = n; i > 1; i--) {
        y = 1.0 / (6 + y);
    }
    if (n >= 1) {
        res += y;
    }

    printf("%.10lf\n", res);

    return 0;
}