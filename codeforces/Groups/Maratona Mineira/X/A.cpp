#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int arr[4], res = 1;

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 4; i++) {
        if (i == 0) {
            if (arr[i + 1] == 1) {
                res = 1;
            }
        } else if (i == 3) {
            if (arr[i - 1] == 1) {
                res = i + 1;
            }
        } else {
            if (arr[i + 1] == 1 and arr[i - 1] == 1) {
            res = i + 1;
            break;
            }
        }
    }

    cout << res << endl;

    return 0;
}