#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void printIntVector(vector<int>);
int chaeck(char);
vector<int> vowelStrings(vector<string> words, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> prefix(words.size());
    int sum = 0;
    for (int i = 0; i < words.size(); i++) {
        int length = words.at(i).length();
        if (chaeck(words.at(i).at(0)) == 1 && chaeck(words.at(i).at(length-1)) == 1)
            sum++;
        prefix[i] = sum;
    }
    for (vector<int> querie:queries) {
        answer.push_back(prefix[querie[1]] - (querie[0] == 0 ? 0 : prefix[querie[0] - 1]));
    }

    // printIntVector(wordsCount);
    return answer;
}

int chaeck(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;
    return 0;
}

void printIntVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) cout << v.at(i) << " ";
    cout << endl;
}

int main() {
    printIntVector(vowelStrings(vector<string> {"aba","bcb","ece","aa","e"}, vector<vector<int>> {{0,2},{1,4},{1,1}}));
    printIntVector(vowelStrings(vector<string> {"a","e","i"}, vector<vector<int>> {{0,2},{0,1},{2,2}}));
    return 0;
}
/*
g++ -o CountVowelStringsInRanges2559 CountVowelStringsInRanges2559.cpp;./CountVowelStringsInRanges2559
*/
