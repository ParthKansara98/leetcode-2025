#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<string> stringMatching(vector<string> words) {
    vector<string> answer;
    unordered_set<string> answerSet;
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < i; j++)
            if (words.at(i).find(words.at(j)) != string::npos)
                answerSet.insert(words[j]);
        
        for (int j = i+1; j < words.size(); j++)
            if (words.at(i).find(words.at(j)) != string::npos)
                answerSet.insert(words[j]);
    }

    for (string  s:answerSet)
        answer.push_back(s);
    reverse(answer.begin(), answer.end());
    return answer;
}

void printStringArray(vector<string> s) {
    for (string s1:s)
    {
        cout << s1 << " ";
    }
    cout << endl;
}

int main() {
    printStringArray(stringMatching(vector<string> {"mass","as","hero","superhero"}));
    printStringArray(stringMatching(vector<string> {"leetcode","et","code"}));
    printStringArray(stringMatching(vector<string> {"blue","green","bu"}));
    return 0;
}
/*
g++ -o StringMatchingInAnArray1408 StringMatchingInAnArray1408.cpp;./StringMatchingInAnArray1408
*/
