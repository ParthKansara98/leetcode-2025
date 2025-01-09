#include <iostream>
#include <vector>

using namespace std;

int prefixCount(vector<string> words, string pref) {
    int count = 0;
    for(string word:words) {
        if(word.find(pref) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << prefixCount(vector<string> {"pay","attention","practice","attend"}, "at") << endl;
    cout << prefixCount(vector<string> {"leetcode","win","loops","success"}, "code") << endl;
    return 0;
}
/*
g++ -o CountingWordsWithAGivenPrefix2185 CountingWordsWithAGivenPrefix2185.cpp;./CountingWordsWithAGivenPrefix2185
*/
