#include <iostream>
#include <vector>

using namespace std;

int findLucky(vector<int> arr) {
    int frequency[500] = {0};
    for (int element : arr)
        frequency[element]++;
    for (int i = 500; i > 0; i--)
        if (frequency[i] == i)
            return i;
    return -1;
}

int main() {
    vector<int> arr;
    arr = {2, 2, 3, 4};
    cout << "largest lucky integer: " << findLucky(arr) << endl;
    arr = {1, 2, 2, 3, 3, 3};
    cout << "largest lucky integer: " << findLucky(arr) << endl;
    arr = {2, 2, 2, 3, 3};
    cout << "largest lucky integer: " << findLucky(arr) << endl;
    return 0;
}
/*
g++ -o FindLuckyIntegerInAnArray1349 FindLuckyIntegerInAnArray1349.cpp;./FindLuckyIntegerInAnArray1349
*/
