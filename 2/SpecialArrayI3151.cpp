#include <iostream>
#include <vector>

using namespace std;

bool isArraySpecial(vector<int> nums) {
    if (nums.size() == 1) return true;
    
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] % 2 == nums[i+1] % 2) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << isArraySpecial(vector<int> {1}) << endl;
    cout << isArraySpecial(vector<int> {2,1,4}) << endl;
    cout << isArraySpecial(vector<int> {4,3,1,6}) << endl;
    return 0;
}
/*
g++ -o SpecialArrayI3151 SpecialArrayI3151.cpp;./SpecialArrayI3151
*/
