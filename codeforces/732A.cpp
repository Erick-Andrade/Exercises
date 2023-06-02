#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int locals[3];
    for (int i = 0; i < 3; i++) cin >> locals[i];

    int min_distance = 10000, distance = 0;

    for (int i = 0; i < 3; i++) {
        distance = 0;
        for (int j = 0; j < 3; j++) {
            distance += abs(locals[i] - locals[j]);
        }

        if (distance < min_distance) min_distance = distance;
    }

    cout << min_distance << endl;

    return 0;
}