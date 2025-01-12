#include <iostream>
#include <vector>

using namespace std;

bool canBeValid(string s, string locked) {
    // check string length
    if (s.length() % 2 == 1) return false;
    if (s[0] == ')' && locked[0] == '1') return false;
    if (s.at(s.length()-1) == '(' && locked.at(s.length()-1) == '1') return false;

    // check string is valide or not 
    vector<int> lockedStack;
    vector<int> unlockedStack;

    for (int i = 0; i < s.length(); i++) {
        if (locked[i] == '0') {
            unlockedStack.push_back(i);
        } else if (s[i] == '(') {
            lockedStack.push_back(i);
        } else {
            if (!lockedStack.empty())
                lockedStack.pop_back();
            else if (!unlockedStack.empty())
                unlockedStack.pop_back();
            else return false;
        }
    }
    while (lockedStack.size() != 0 && unlockedStack.size() != 0 && lockedStack[lockedStack.size()-1] < unlockedStack[unlockedStack.size()-1]) {
        lockedStack.pop_back();
        unlockedStack.pop_back();
    }

    if (lockedStack.size() != 0) return false;
    return unlockedStack.size() % 2 == 0?true:false;
}

int main() {
    cout << canBeValid("))()))", "010100") << endl;
    cout << canBeValid("()()", "0000") << endl;
    cout << canBeValid(")", "0") << endl;
    cout << "-----------------------" << endl;
    cout << canBeValid("(", "0") << endl;
    cout << canBeValid("()", "11") << endl;
    cout << canBeValid("()))", "0010") << endl;
    cout << canBeValid("((())(((()()", "100000111010") << endl;
    cout << canBeValid("()()()()(((()(", "10000000000001") << endl;
    cout << canBeValid("))()()()((()))", "10000000000001") << endl;
    cout << canBeValid("((()(()()))()((()()))))(((()(()", "1011110010010100111010000001001") << endl;
    cout << canBeValid("())(()(()(())()())(())((())(()())((())))))(((((((())(()))))(", "100011110110011011010111100111011101111110000101001101001111") << endl;
    cout << canBeValid("(()))()))(()((()()(((()))()()()()()())))()()(()())()(()((()()((()((((((()(()()(()()())(((((())((()))))()(((((((()()())()))())((((((()(())())()((())()()((())((((())(((())(())()()))(((()()())())))((()))))()()()((()))())(())(((()()((())(())(())())()((()))())(())()(()())((((()(((())((()()())(((()(((((()))()))))))(()((())())(())))))(())(((())()()(()))())())))(((())))()()))()())))))())()(()()))(())(()())))())()))((((())(()))()(((())())(()(()))()))((()(())()()))))())(()(((((()", "110001111001011100000100011110101000100110010010011001110010111111100111000100000000101111101001111111011101001110011001001100100001100000000010100010101101100000100001000110111000111110110010111011010010100011111101110011100010010001111001010001001000111101101111111011001000100111100110101000100011011001001100110011111111111100101000100111111100000100101101000101111101000011110001001011111010011010000100100000000011101011001110000110011000100001110101100101111111110100") << endl;
    return 0;
}
/*
g++ -o CheckIfAParenthesesStringCanBeValid2116 CheckIfAParenthesesStringCanBeValid2116.cpp;./CheckIfAParenthesesStringCanBeValid2116
*/
