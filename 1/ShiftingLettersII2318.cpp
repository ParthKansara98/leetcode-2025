#include <iostream>
#include <vector>

using namespace std;

string shiftingLetters1(string s, vector<vector<int>> shifts) {
    vector<string> shiftingLetters = {{"zabcdefghijklmnopqrstuvwxy"},{"bcdefghijklmnopqrstuvwxyza"}};
    for(vector<int> shift:shifts) {
        for (int i = shift[0]; i <= shift[1]; i++) {
            s.at(i) = shiftingLetters[shift[2]].at(s.at(i)-'a');
        }
    }
    return s;
}

string shiftingLetters2(string s, vector<vector<int>> shifts) {
    string forward  = "bcdefghijklmnopqrstuvwxyza";
    string backward = "zabcdefghijklmnopqrstuvwxy";
    for(vector<int> shift:shifts) {
        if (shift[2] == 1) {
            for (int i = shift[0]; i <= shift[1]; i++) {
                s.at(i) = forward.at(s.at(i)-'a');
            }
            continue;
        }
        for (int i = shift[0]; i <= shift[1]; i++) {
            s.at(i) = backward.at(s.at(i)-'a');
        }
    }
    return s;
}

string shiftingLetters(string s, vector<vector<int>> shifts) {
    int n = s.size();
    vector<int> diffArray(n, 0);

    for (auto shift : shifts) {
        if (shift[2] == 1) {
            diffArray[shift[0]]++;
            if (shift[1] + 1 < n) {
                diffArray[shift[1] + 1]--;
            }
        } else {
            diffArray[shift[0]]--;
            if (shift[1] + 1 < n) {
                diffArray[shift[1] + 1]++;
            }
        }
    }

    string result(n, ' ');
    int numberOfShifts = 0;

    for (int i = 0; i < s.size(); i++) {
        numberOfShifts = (numberOfShifts + diffArray[i]) % 26;
        if (numberOfShifts < 0) numberOfShifts += 26;
        result[i] = 'a' + (s[i] - 'a' + numberOfShifts) % 26;
    }

    return result;
}

int main() {
    cout << shiftingLetters("abc", vector<vector<int>> {{0,1,0},{1,2,1},{0,2,1}}) <<endl;
    cout << shiftingLetters("dztz", vector<vector<int>> {{0,0,0},{1,1,1}}) <<endl;
    return 0;
}
/*
g++ -o ShiftingLettersII2318 ShiftingLettersII2318.cpp;./ShiftingLettersII2318
*/
