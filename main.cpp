#include <iostream>
#include "Solutions/剑指 Offer 12.h"

int main() {
//    vector<vector<int>> board{vector<int>{1,0}};
    Solution solution;
    vector<vector<char>> vec1 {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    vector<int> vec2{1, 2, 3, 4};
    cout<<solution.exist(vec1, "ABCCED");
    return 0;
}
