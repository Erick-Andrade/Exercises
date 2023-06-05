#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    vector<int> nums;
    for (int i = 0; i < 4; i++) {
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    /*
    a + b = nums[0]
    a + c = nums[1]
    b + c = nums[2]
    a + b + c = nums[3]


    a + b + c = nums[3]
    a + nums[2] = nums[3]
    a = nums[3] - nums[2]

    a + b = nums[0]
    b = nums[0] - nums[3] + nums[2]

    a + c = nums[1]
    c = nums[1] + nums[2] - nums[3]
    */
    int a = nums[3] - nums[2], b = nums[0] - nums[3] + nums[2], c = nums[1] + nums[2] - nums[3];


    cout << a << " " << b << " " << c << endl;
    return 0;
}