#include <bits/stdc++.h>

using namespace std;

int main() {

    // Par ou Ímpar
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    if (sum % 2 == 0) {
        cout << "Bino" << endl;
    } else {
        cout << "Cino" << endl;
    }
}