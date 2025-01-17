#include <iostream>
#include <vector>

using namespace std;

bool doesValidArrayExist(vector<int> derived) {
    int XOR = 0;
    for (int i:derived) if (i == 1) XOR = (XOR + 1)%2;
    return 0 == XOR?1:0;
}

int main() {
    // doesValidArrayExist(vector<int> );
    cout << doesValidArrayExist(vector<int> {1,1,0}) << endl;
    cout << doesValidArrayExist(vector<int> {1,1}) << endl;
    cout << doesValidArrayExist(vector<int> {1,0}) << endl;
    return 0;
}
/*
g++ -o NeighboringBitwiseXOR2683 NeighboringBitwiseXOR2683.cpp;./NeighboringBitwiseXOR2683
*/
