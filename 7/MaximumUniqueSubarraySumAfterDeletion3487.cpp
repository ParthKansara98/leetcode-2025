#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int maxSum(vector<int> nums) {
    // 1
    /*
    int maxElement = INT8_MIN;
    unordered_set<int> seen;

    for(int i = 0; i < nums.size(); i++) {
        maxElement = max(maxElement, nums[i]);
        seen.insert(nums[i]);
    }

    if (maxElement < 0) return maxElement;

    int answer = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        if (seen.find(nums[i]) != seen.end() && nums[i] >= 0) {
            answer += nums[i];
            seen.erase(nums[i]);
        }
    }

    return answer;
    */
    
    // 2
    sort(nums.begin(), nums.end(), greater<int>());
    if (nums[0] < 0) return nums[0];
    int answer = 0;
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.find(num) == seen.end() && num >= 0) {
            answer += num;
            seen.insert(num);
        }
    }
    return answer;
}

int main() {

    cout << maxSum(vector<int> {1, 2, 3, 4, 5}) << endl; // Expected output: 15
    cout << maxSum(vector<int> {1, 1, 0, 1, 1}) << endl; // Expected output: 1
    cout << maxSum(vector<int> {1, 2, -1, -2, 1, 0, -1}) << endl; // Expected output: 3
    cout << maxSum(vector<int> {-1, -2, -3, -4, -5}) << endl; // Expected output: -15
    cout << maxSum(vector<int> {1, -2, 3, -4, 5}) << endl; // Expected output: 9

    return 0;
}
/*
g++ -o MaximumUniqueSubarraySumAfterDeletion3487 MaximumUniqueSubarraySumAfterDeletion3487.cpp;./MaximumUniqueSubarraySumAfterDeletion3487
*/
