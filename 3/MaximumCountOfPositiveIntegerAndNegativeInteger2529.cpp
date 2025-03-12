#include <iostream>
#include <vector>

using namespace std;

int maximumCount(vector<int> nums) {
    if(nums.size() == 1) return nums[0] == 0?0:1;
    if(nums[0] > 0) return nums.size();
    if(nums[nums.size()-1] < 0) return nums.size();
    int i = 0, count = 0, totalZeros = 0;

    while (nums[i] < 0 && i < nums.size()) {
        count++;
        i++;
    }

    while (nums[i] == 0 && i < nums.size()) {
        totalZeros++;
        i++;
    }

    return count>nums.size()-(count+totalZeros)?count:nums.size()-(count+totalZeros);
}

int main() {
    cout << maximumCount(vector<int>{-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}) << endl;
    cout << maximumCount(vector<int>{-2,-1,-1,1,2,3}) << endl;
    cout << maximumCount(vector<int>{-3,-2,-1,0,0,1,2}) << endl;
    cout << maximumCount(vector<int>{5,20,66,1314}) << endl;
    cout << maximumCount(vector<int>{-1}) << endl;
    cout << maximumCount(vector<int>{0}) << endl;
    return 0;
}
/*
g++ -o MaximumCountOfPositiveIntegerAndNegativeInteger2529 MaximumCountOfPositiveIntegerAndNegativeInteger2529.cpp;./MaximumCountOfPositiveIntegerAndNegativeInteger2529
*/
