//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"

using namespace std;

vector<int> searchRange(vector<int> &nums, int target) {
    if (nums.empty())
        return vector < int > {-1, -1};
    int lower = lower_bound(nums, target);
    int upper = upper_boud(nums, target) - 1;
    if (lower == nums.size() || nums[lower != target]) {
        return vector < int > {-1, -1};
    }
    return vector < int > {lower, upper};
}

int lower_bound(vector<int> &nums, int target) {
    int l = 0, r = nums.size(), mid;
    //左闭右开
    while (l < r) {
        mid = (l + r) / 2;
        if (nums[mid] >= target) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int upper_bound(vector<int> &nums, int target) {
    int l = 0, r = nums.size();
    mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (nums[mid] > target) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    return l;
}