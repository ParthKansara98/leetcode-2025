#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countPrefixSuffixPairs(vector<string> words) {
    int count = 0, i = 1;
    for (string word:words) {
        for (int j = i++; j < words.size(); j++) {
            string stringForFinding = words.at(j);
            if (word.length() > stringForFinding.length()) continue;
            
            if (stringForFinding.find(word) == 0 && stringForFinding.rfind(word) == stringForFinding.length()-word.length()) count++;
        }
    }
    return count;
}

int main() {
    cout << countPrefixSuffixPairs(vector<string> {"a","aba","ababa","aa"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"pa","papa","ma","mama"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"abab","ab"}) << endl;
    cout << "-------------------------" << endl;
    cout << countPrefixSuffixPairs(vector<string> {"a"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"ac","abc"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"abc","aba"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"abc","abcba","abccba","cbabc","cbaabc","cbacba","abc","abcabc"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"sds","s","d","s","td","tt","dd","tt","sd","sdd","ts","s","d","d"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"mmm","smmm","hmmm","hs","s","h","s","h","hhmm","smm","hhh","shh","sh","smmm"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a","a"}) << endl;
    cout << countPrefixSuffixPairs(vector<string> {"aa","aaa","aaaa","aaaaa","aaaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa","a","aa","aaa","aaaa","aaaaa"}) << endl;
    return 0;
}
/*
g++ -o CountPrefixAndSuffixPairsI3042 CountPrefixAndSuffixPairsI3042.cpp;./CountPrefixAndSuffixPairsI3042
*/
