#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

void generateHappyString(int, string, vector<string> &);

string getHappyString(int n, int k) {
    vector<string> answer;

    generateHappyString(n, "", answer);
    sort(answer.begin(), answer.end());
    
    return answer.size()-1 > k?answer[k-1]:"";
}

void generateHappyString(int n, string currentString, vector<string> &happyStrings) {
    if (currentString.length() == n) {
        happyStrings.push_back(currentString);
        return;
    }
    
    for (char ch = 'a'; ch <= 'c'; ch++) {
        if (currentString.length() > 0 && currentString.back() == ch) continue;
        generateHappyString(n, currentString+ch, happyStrings);
    }
}

int main() {
    cout << getHappyString(1, 3) << endl;
    cout << getHappyString(1, 4) << endl;
    cout << getHappyString(3, 9) << endl;
    cout << getHappyString(2, 7) << endl;
    cout << getHappyString(10, 100) << endl;
    return 0;
}
/*
g++ -o TheKThLexicographicalStringOfAllHappyStringsOfLengthN1415 TheKThLexicographicalStringOfAllHappyStringsOfLengthN1415.cpp;./TheKThLexicographicalStringOfAllHappyStringsOfLengthN1415
*/
