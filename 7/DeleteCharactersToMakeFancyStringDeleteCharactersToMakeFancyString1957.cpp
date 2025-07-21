#include<iostream>

using namespace std;

string makeFancyString(string s) {
    int j = 2;
    for (int i = 2; i < s.size(); i++) {
        if (s[i] != s[j - 1] || s[i] != s[j - 2]) {
            s[j++] = s[i];
        }
    }
    // s.resize(j);
    s.erase(s.begin() + j, s.end());
    return s;
}

int main() {
    cout << makeFancyString("leeetcode") << endl;
    return 0;
}
/*
g++ -o DeleteCharactersToMakeFancyStringDeleteCharactersToMakeFancyString1957 DeleteCharactersToMakeFancyStringDeleteCharactersToMakeFancyString1957.cpp;./DeleteCharactersToMakeFancyStringDeleteCharactersToMakeFancyString1957
*/
