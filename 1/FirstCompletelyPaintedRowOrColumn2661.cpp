#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int firstCompleteIndex(vector<int> arr, vector<vector<int>> mat) {
    vector<int> row(mat.size());
    vector<int> col(mat[0].size());
    unordered_map<int, pair<int, int>> mapForMat;

    for (int i = 0; i < mat.size(); i++) for (int j = 0; j < mat[i].size(); j++) mapForMat[mat[i][j]] = {i, j};
    
    for (int i = 0; i < mapForMat.size(); i++) {
        row[mapForMat[arr[i]].first]++;
        col[mapForMat[arr[i]].second]++;

        if (row[mapForMat[arr[i]].first] == mat.size() || col[mapForMat[arr[i]].second] == mat[0].size()) return i;
    }

    return 0;
}

int main() {
    cout << firstCompleteIndex(vector<int> {1,3,4,2}, vector<vector<int>> {{1,4},{2,3}}) << endl;
    cout << firstCompleteIndex(vector<int> {2,8,7,4,1,3,5,6,9}, vector<vector<int>> {{3,2,5},{1,4,6},{8,7,9}}) << endl;
    return 0;
}
/*
g++ -o FirstCompletelyPaintedRowOrColumn2661 FirstCompletelyPaintedRowOrColumn2661.cpp;./FirstCompletelyPaintedRowOrColumn2661
*/
