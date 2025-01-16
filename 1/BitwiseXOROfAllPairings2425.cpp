#include <iostream>
#include <vector>

using namespace std;

int xorAllNums(vector<int> nums1, vector<int> nums2) {
    int answer = 0;
    if (nums1.size() % 2 == 1) for (int num2:nums2) answer = answer ^ num2;
    if (nums2.size() % 2 == 1) for (int num1:nums1) answer = answer ^ num1;
    
    return answer;
}

int main() {
    cout << xorAllNums(vector<int> {2,1,3}, vector<int> {10,2,5,0}) << endl;
    cout << xorAllNums(vector<int> {1,2}, vector<int> {3,4}) << endl;
    cout << xorAllNums(vector<int> {2}, {4}) << endl;
    cout << xorAllNums(vector<int> {27,6,15}, {8,23,15,16,25,5}) << endl;
    cout << xorAllNums(vector<int> {10,0,15,25,29,3,2}, {12}) << endl;
    cout << xorAllNums(vector<int> {16,15,8,6,29,2,96,29}, {24,12,13}) << endl;
    cout << xorAllNums(vector<int> {29,10,25,6}, {24,11,1,17,11,5,1,1,27}) << endl;
    cout << xorAllNums(vector<int> {947,662,559,0,967,251,90,234,864,402,101,889,146,358,940,264,411,962,448,369,485,925,558,347,53,245,598}, {440,506,176,480,787,124,989,649,750,508,494}) << endl;
    cout << xorAllNums(vector<int> {115,870,587,434,15,758,641,217,834,760,32,750,659}, {412,942,574,687,960,398,756,153,449,217,639,260,885,710,68,454,327,367,531,483,875,511,555,912,559,962,80,979,656}) << endl;
    cout << xorAllNums(vector<int> {588,12,471,895,265,749,373,151,317,603,721,197,312,650,777,340,754,410,648,905,719,636,398,102,687,586,250,820,482,396,277,881,744,190}, {837,785,292,275,830,157,615,845,278,664,997,959,767,493,577,611,710,644,438,205,972,753,385,819,215,382,706,76,673,798,858,774,154,243,473,700,973,59,855,225,154,668,595,253,45,949}) << endl;
    return 0;
}
/*
g++ -o BitwiseXOROfAllPairings2425 BitwiseXOROfAllPairings2425.cpp;./BitwiseXOROfAllPairings2425
*/
