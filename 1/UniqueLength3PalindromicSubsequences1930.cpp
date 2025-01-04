#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int countPalindromicSubsequence(string s) {
    vector<int> first(26, -1);
    vector<int> last(26, -1);
    
    for (int i = 0; i < s.size(); i++) {
        int curr = s[i] - 'a';
        if (first[curr] == - 1) {
            first[curr] = i;
        }
        
        last[curr] = i;
    }
    
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (first[i] == -1) {
            continue;
        }
        
        unordered_set<char> between;
        for (int j = first[i] + 1; j < last[i]; j++) {
            between.insert(s[j]);
        }
        
        ans += between.size();
    }
    
    return ans;
}

int main() {
    cout << countPalindromicSubsequence("aabca") << endl;
    cout << countPalindromicSubsequence("abc") << endl;
    cout << countPalindromicSubsequence("bbcbaba") << endl;
    return 0;
}
/*
g++ -o UniqueLength3PalindromicSubsequences1930 UniqueLength3PalindromicSubsequences1930.cpp;./UniqueLength3PalindromicSubsequences1930
*/
