#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, mishka = 0, chris = 0;
    cin >> n;

    while (n--) {
        int m, c;
        cin >> m >> c;

        if (m > c) {
            mishka++;
        } else if (m < c) {
            chris++;
        } 
    }

    if (mishka == chris) {
        cout << "Friendship is magic!^^" << endl;
    } else if (mishka > chris) {
        cout << "Mishka" << endl;
    } else {
        cout << "Chris" << endl;
    }

    return 0;
}