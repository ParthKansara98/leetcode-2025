#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
void printVector(vector<int>);

long long gridGame(vector<vector<int>> grid) {
    int length = grid[0].size();
    long long firstRowSum = 0, secondRowSum = 0;
    long long answer = __LONG_LONG_MAX__;

    for (int i:grid[0]) firstRowSum += i;
    
    for (int i = 0; i < grid[0].size(); i++) {
        firstRowSum = firstRowSum - grid[0][i];

        answer = min(answer, max(firstRowSum, secondRowSum));
        secondRowSum = secondRowSum + grid[1][i];
    }
    
    return answer;
}

void printVector(vector<int> v) {
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    cout << gridGame(vector<vector<int>> {{2,5,4},{1,5,1}}) << endl;
    cout << gridGame(vector<vector<int>> {{3,3,1},{8,5,2}}) << endl;
    cout << gridGame(vector<vector<int>> {{1,3,1,15},{1,3,3,1}}) << endl;
    return 0;
}
/*
g++ -o GridGame2017 GridGame2017.cpp;./GridGame2017
*/
