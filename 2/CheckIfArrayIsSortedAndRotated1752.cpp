#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int> nums) {
    vector<int> numsSort(nums);
    sort(numsSort.begin(), numsSort.end());
    for (int i = 0; i < nums.size(); i++) {
        int n = nums[nums.size()-1];
        nums.assign(nums.begin(), nums.end()-1);
        nums.insert(nums.begin(), n);
        if (nums == numsSort) return true;
    }

    return false;
}

int main() {
    // cout << check(vector<int> {3,4,5,1,2}) << endl;
    check(vector<int> {3,4,5,1,2});
    return 0;
}
/*
g++ -o CheckIfArrayIsSortedAndRotated1752 CheckIfArrayIsSortedAndRotated1752.cpp;./CheckIfArrayIsSortedAndRotated1752
*/
