#include <iostream>
// #include <vector>

using namespace std;

int minimumRecolors(string blocks, int k) {
    int minChanges = INT16_MAX;
    for (int i = 0; i <= blocks.size()-k; i++) {
        int count = 0;
        for (int j = i; j < i+k; j++) if(blocks[j] == 'W')count++;
        minChanges = min(minChanges, count);
    }
    return minChanges;
}

int main() {
    cout << minimumRecolors("WBBWWBBWBW", 7) << endl;
    cout << minimumRecolors("WBWBBBW", 2) << endl;
    cout << minimumRecolors("WWBBBWBWWBWWBBBWWWWWBWBBWBWBWBWBWBWBBBWBW", 19) << endl;
    cout << minimumRecolors("WBBBWWWWBBBWBWWBWWWWBWBBWBWWWBWWWWWWBWWWBBWB", 34) << endl;
    cout << minimumRecolors("WWBBBWWBBWWBBBBWWWWBWBBWWWBWWBBBBWBWWWWWBBBWBWBBBWBBWWWBWWWWBWWWBWBWWWWBWWBB", 6) << endl;
    cout << minimumRecolors("WBWBWBBWWWWBWBBBWBWBB", 19) << endl;
    cout << minimumRecolors("WBBBW", 4) << endl;
    cout << minimumRecolors("WWBWBWWBBWBWBWWBWWBWWBBBBWWBBWWWWBBWBWWWBBBBBWBWBWWWWBBWBBBBBWWBBBWBWWWBBBWWWWBBWWBWBB", 40) << endl;
    cout << minimumRecolors("B", 1) << endl;
    cout << minimumRecolors("BBWWWBBWBBBWWWWBBBBWWWWBBWWWBWBWWBBBWWBWWWB", 2) << endl;
    return 0;
}
/*
g++ -o MinimumRecolorsToGetKConsecutiveBlackBlocks2379 MinimumRecolorsToGetKConsecutiveBlackBlocks2379.cpp;./MinimumRecolorsToGetKConsecutiveBlackBlocks2379
*/
