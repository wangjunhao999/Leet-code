//
// Created by Shinomiya on 2020/12/31.
//

#include "iostream"
#include "vector"

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int pos = m-- + n-- - 1;
    while (m >= 0 && n >= 0)
        nums1[pos--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
    while (n >= 0)
        nums1[pos--] = nums2[n--];
}