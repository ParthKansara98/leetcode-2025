#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <unordered_set>

using namespace std;

string findDifferentBinaryString(vector<string> nums) {
    int i;
    unordered_set<int> numsInInt;
    for(i = 0; i < nums.size(); i++) {
        numsInInt.insert(bitset<16>(nums[i]).to_ulong());
    }

    for(i = 0; i < numsInInt.size(); i++) {
        int old = numsInInt.size();
        numsInInt.insert(i);
        if(old != numsInInt.size()) {
            return bitset<16>(i).to_string().substr(16-nums[0].length());
        }
    }
    return bitset<16>(i).to_string().substr(16-nums[0].length());
}

int main() {
    cout << findDifferentBinaryString(vector<string> {"01","10"}) << endl;
    cout << findDifferentBinaryString(vector<string> {"00","01"}) << endl;
    cout << findDifferentBinaryString(vector<string> {"111","011","001"}) << endl;
    return 0;
}
/*
g++ -o FindUniqueBinaryString1980 FindUniqueBinaryString1980.cpp;./FindUniqueBinaryString1980
*/
