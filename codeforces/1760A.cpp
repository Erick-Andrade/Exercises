#include <bits/stdc++.h>

using namespace std;


int nums[3];

void sort() {
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if (nums[i] < nums[j]) {
                int aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
}

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 3; i++) cin >> nums[i];
        sort();
        cout << nums[1] << endl;
    }

    return 0;
}