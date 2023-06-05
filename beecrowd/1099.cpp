#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void sum_odd(int x, int y) {
    int sum = 0;
    if ((x + 1) % 2 != 1) {
        x++;
    }
    for (int i = x + 1; i < y; i+=2) {
        sum += i;
    }

    cout << sum << endl;
}

int main() {

    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(&x, &y);
        sum_odd(x, y);
    }
    return 0;
}