//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"

using namespace std;

string minWindow(string S, string T) {
    vector<int> chars(128, 0);
    vector<bool> flag(128, false);
    //统计T中的字符情况
    for (int i = 0; i < T.size(); i++) {
        flag[T[i]] = true;
        ++chars[T[i]];
    }

    //移动滑动窗口,不断更改统计数据
    int cnt = 0, l = 0, min_l = 0, min_size = S.size() + 1;
    for (int r = 0; r < S.size(); r++) {
        if (flag[S[r]]) {
            if (--chars[S[r]] >= 0) {
                ++cnt;
            }
            /*
            * 若当前滑动窗口包含T中所有字符
            * 尝试将右移,在不影响结果的情况下获得最短子字符串
            */
            while (cnt == T.size()) {
                if (r - l + 1 < min_size) {
                    min_l = l;
                    min_size = r - l + 1;
                }
                if (flag[S[l] && ++chars[S[l]] > 0){
                    --cnt;
                }
                ++l;
            }
        }
    }
    return min_size > S.size() ? "" : S.substr(min_l, min_size);
}