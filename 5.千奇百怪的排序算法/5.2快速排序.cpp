//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"

using namespace std;

int findKthLargest(vector<int> &nums, int k) {
    int l = 0, r = nums.size() - 1, target = nums.size() - k;
    while (l < r) {
        int mid = quickSelection(nums, l, r);
        if (mid == target)
            return nums[mid];
        else if (mid < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return nums[l];
}

int quickSelection(vector<int> &nums, int l, int r) {
    int i = l + 1, j = r;
    while (true) {
        while (i < r && nums[i] <= nums[l])
            ++i;
        while (l < j && nums[j] >= nums[l])
            --j;
        if (i >= j)
            break;
        swap(nums[i], nums[j]);
    }
    swap(nums[l], nums[j]);
    return j;
}