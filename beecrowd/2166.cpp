#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    double res = 1, y = 1 / 2.0;
    cin >> n;

   
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            res += y;
        }

        y = 1 / (2 + y);
    }
    
    printf("%.10lf\n", res);
    return 0;
}