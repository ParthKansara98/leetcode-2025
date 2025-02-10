#include <iostream>
#include <vector>

using namespace std;

string clearDigits(string s) {
    string a;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            a.pop_back();
        } else {
            a.append(string{s[i]});
        }
    }
    
    return a;
}

int main(){
    cout << clearDigits("abc") << endl;
    cout << clearDigits("cb34") << endl;
    cout << clearDigits("a") << endl;
    cout << clearDigits("xzuzr2ghilydk") << endl;
    return 0;
}
/*
g++ -o ClearDigits3174 ClearDigits3174.cpp;./ClearDigits3174
*/
