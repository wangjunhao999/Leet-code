//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
    int l = 0, r = numbers.size() - 1, sum;
    while (l < r) {
        sum = numbers[l] + numbers[r];
        if (sum == target)
            break;
        else if (sum < target)
            ++l;
        else
            --r;
    }
    return vector < int > {l + 1, r + 1};
}