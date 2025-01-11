#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void printVectorInt(vector<int> vectorInt) {
    for (int v:vectorInt) cout << v << " ";
}

bool canConstruct(string s, int k) {
    if (s.length() == k) return true;
    if (s.length() < k) return false;
    
    vector<int> characterCount(26);
    int oddCount = 0;
    
    for (int i = 0; i < s.length(); i++) characterCount[s.at(i)-'a']++;
    for (int i:characterCount) if (i % 2 != 0) oddCount++;

    if (oddCount > k) return false;
    
    return true;
}

int main() {
    (canConstruct("annabelle", 2) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("leetcode", 3) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("true", 4) == 1)? cout << "true" << endl:cout << "false" << endl;
    cout << "----------------------------------------\n";
    (canConstruct("ab",10) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("a",1) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("yiipem",3) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("abcdefghijklmnopqrstuvwxyz",25) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("rraceca",3) == 1)? cout << "true" << endl:cout << "false" << endl;
    (canConstruct("dwhjvyplfsdbgjxqcfvngjsowlmjpkmuasvfvbvvrmnectsrbyfomxskpajfowsnfpkxdmqcifozydqqzeflvdulslyxpyejxjvpnrkqnlrchpzaaaqsxabpgtrssnvtcathbbywnzuszajwpvpqavewpqjxzltijwnpjdhhmezcfaazghlcpylwyylpkncoqlseqizirlxuzlicmezlrbptgmcixhruqtrbtwuebsstsmsttzexdmpkfuukevyepkzmfuetklhbrgkelzrbjteisnujiryfqjqkgoqxevtoqlesrlmzpewhxnngdcmdwxaqyinrxsdvtwepoznsvsybbvqdieffigolowmehabgcmpnxjjjaexvhyesisxoeqvsacwmykfvzxudoiedivyfxyeduoghowpyzatvakmfndewyjobxdscamkhohlybdmnsiawzehtrhktmgtgbarisackxsjvekfdlhsgawsnceauavwzmxtljxssonuwiwftvpjeufqyezgyutfvfsqcqtpkaesibkwxkhhvgtwwoebziplwwttuvpmypqdqjiwcamdlwstprplbunwjcbzkjhpgqjvnhcvpnzyrsvtsmcezkfehxdekjwxjeohwuxljqoyrdvziwflwvgdmwiqtumiubqwjfgouddnhuzxgmdjaujxaxnfdjqatgybqznkutkqakzmkcowibruocgzophvbvfsxdraricdltozvxzppxgbckbyiibpnzhwtebjzudwlshwirltmvmjcitwtysccjcjzjabzkvhclwmufgrtbavgknvvefhozasnodnrjernryytmzkmgobcvckeiqahlnwkaippnrqfmzaimoccnssbrmlmoxknwwpmwiblqdntffdjumbiejzexfgvrrbcqwyqybsehytbssbwtovyeencqirqfhaxtylxxnhvksytmbmttaggtijmoywky",30) == 1)? cout << "true" << endl:cout << "false" << endl;
    return 0;
}
/*
g++ -o ConstructKPalindromeStrings1400 ConstructKPalindromeStrings1400.cpp;./ConstructKPalindromeStrings1400
*/
