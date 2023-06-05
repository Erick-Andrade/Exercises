#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, num, sum;
    cin >> n;
    while (n--) {
        cin >> num;
        sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        cout << num;
        if (sum != num) {
            cout << " nao";
        }

        cout << " eh perfeito" << endl;
    }
    return 0;
}