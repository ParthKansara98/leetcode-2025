#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> grid) {
    int size = 0;
    for (int i = 0; i < grid.size(); i++) {
        size = size + grid[i].size();
    }
    vector<int> temp = vector<int>(size,-1);
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            temp[grid[i][j]-1]++;
        }
    }
    vector<int> result;
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == 1) {
            result.push_back(i+1);
        }
    }
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == -1) {
            result.push_back(i+1);
        }
    }    
    return result;
}

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    printVector(findMissingAndRepeatedValues(vector<vector<int>> {{1,3},{2,2}}));
    printVector(findMissingAndRepeatedValues(vector<vector<int>> {{9,1,7},{8,9,2},{3,4,6}}));
    return 0;
}
/*
g++ -o FindMissingAndRepeatedValues2965 FindMissingAndRepeatedValues2965.cpp;./FindMissingAndRepeatedValues2965
*/
