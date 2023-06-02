#include <bits/stdc++.h>

using namespace std;

int main() {

    double num, average = 0;

    for (int i = 0; i < 2; i++) {
        cin >> num;
        while (num < 0 or num > 10){
            cout << "nota invalida" << endl;
            cin >> num;
        }

        average += num;
    }

    average /= 2;
    cout << "media = " << setprecision(2) << fixed << average << endl;

    return 0;
}