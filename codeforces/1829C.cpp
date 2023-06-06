#include <bits/stdc++.h>

using namespace std;
#define picc pair<int, pair<char, char>>

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, n;
    vector<picc> books;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;
            books.push_back({m, {s[0], s[1]}});
        }

        int skill1 = 10e6, skill2 = 10e6;
        vector<int> twoSkills;

        for (int i = 0; i < n; i++) {
            if (books[i].second.first == '1' and books[i].second.second == '1'){
                twoSkills.push_back(books[i].first);
            } else if (books[i].second.first == '1') {
                if (skill1 > books[i].first) {
                    skill1 = books[i].first;
                }
            } else if (books[i].second.second == '1') {
                if (skill2 > books[i].first) {
                    skill2 = books[i].first;
                }
            }
        }

        int total = skill1 + skill2;
        if (total >= 10e6 and twoSkills.size() == 0) {
            total = -1;
        } else {
            for (int i = 0; i < (int) twoSkills.size(); i++) {
                if (twoSkills[i] < total) {
                    total = twoSkills[i];
                }
            }
        }

        cout << total << endl;

        twoSkills.clear();
        books.clear();
    }


    return 0;
}