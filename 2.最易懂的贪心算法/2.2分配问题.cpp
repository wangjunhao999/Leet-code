//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int findContentChildren(vector<int> &children, vector<int> &cookies) {
    sort(children.begin(), children.end());
    sort(cookies.begin(), cookies.end());
    int child = 0, cookie = 0;
    while (child < children.size() && cookie < cookies.size()) {
        if (children[child] <= cookies[cookie])
            ++child;
        ++cookie;
    }
    return child;
}