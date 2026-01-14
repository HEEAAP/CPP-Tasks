#include <iostream>
#include <vector>
#include <algorithm>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    std::sort(nums1.begin(), nums1.end());

    return nums1.size() % 2 ? nums1[nums1.size() / 2] : (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2.0;
}

/*
*   nums1.size() % 2 
*       - Checks if the size of nums1 is odd. Returns 1 if odd, 0 if even.

*   ? nums1[nums1.size() / 2] 
*       - If odd, returns the middle element.

*   : (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2.0;
*       - If even, returns the average of the two middle elements.
*/