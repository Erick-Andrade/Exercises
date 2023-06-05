#include <bits/stdc++.h>

using namespace std;

int main() {

    int x1, y1, x2, y2, total;
    cin >> x1 >> y1 >> x2 >> y2;
    while (x1 != 0 and y1 != 0 and x2 != 0 and y2 != 0){
        if (x1 == x2 and y1 == y2) {
            total = 0;
        } else if (x1 == x2) {
            total = 1;
        } else if (y1 == y2) {
            total = 1;
        } else {
            int newx = x1, newy = y1, flag = 0;

            while (newx <= 8 and newy <= 8){
                newx++;
                newy++;
                if (newx == x2 and newy == y2) {
                    flag = 1;
                    break;
                }
            }

            newx = x1, newy = y1;

            while (newx >= 1 and newy <= 8){
                newx--;
                newy++;
                if (newx == x2 and newy == y2) {
                    flag = 1;
                    break;
                }
            }

            newx = x1, newy = y1;

            while (newx >= 1 and newy >= 1){
                newx--;
                newy--;
                if (newx == x2 and newy == y2) {
                    flag = 1;
                    break;
                }
            }

            newx = x1, newy = y1;

            while (newx <= 8 and newy >= 1){
                newx++;
                newy--;
                if (newx == x2 and newy == y2) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                total = 1;
            } else {
                total = 2;
            }
        }

        
        cout << total << endl;
        cin >> x1 >> y1 >> x2 >> y2;
    }
    return 0;
}