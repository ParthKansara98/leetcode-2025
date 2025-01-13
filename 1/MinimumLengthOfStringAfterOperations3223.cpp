#include <iostream>
#include <vector>

using namespace std;

int minimumLength(string s) {
    vector<int> sWordCount(26, -1);
    int count = 0, total = 0;
    for (int i = 0; i < s.length(); i++) sWordCount[s[i] - 'a'] = (sWordCount[s[i] - 'a'] != -1)?sWordCount[s[i] - 'a']+1:1;
    for (int i:sWordCount) i == -1?total++:0;
    for (int i = 0; total != 26; i = (i + 1) % 26) {
        if (sWordCount[i] == -1) continue;
        if (sWordCount[i] < 3 && sWordCount[i] != -1) {
            sWordCount[i] = -1;
            total++;
        }
        if (sWordCount[i] > 2) {
            count = count + 2;
            sWordCount[i]-=2;
        }
    }
    return s.length() - count;
}

int main() {
    cout << "answer " << minimumLength("abaacbcbb") << endl;
    cout << "answer " << minimumLength("aa") << endl;
    cout << "answer " << minimumLength("ucvbutgkohgbcobqeyqwppbxqoynxeuuzouyvmydfhrprdbuzwqebwuiejoxsxdhbmuaiscalnteocghnlisxxawxgcjloevrdcj") << endl;
    cout << "answer " << minimumLength("ggggfhhfuhjsjiksjsjs") << endl;
    cout << "answer " << minimumLength("a") << endl;
    cout << "answer " << minimumLength("cc") << endl;
    cout << "answer " << minimumLength("fffdhsylokalskhgdfkajlskaldskjf") << endl;
    cout << "answer " << minimumLength("abc") << endl;
    return 0;
}
/*
g++ -o MinimumLengthOfStringAfterOperations3223 MinimumLengthOfStringAfterOperations3223.cpp;./MinimumLengthOfStringAfterOperations3223
*/
