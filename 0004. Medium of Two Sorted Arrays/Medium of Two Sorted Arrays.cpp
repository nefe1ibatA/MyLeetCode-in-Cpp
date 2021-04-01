#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);
        int exp = 2;
        int l1 = nums1.size(), l2 = nums2.size();
        int i = l1 / exp, j = (l1 + l2 + 1) / 2 - i;
        int nim1, ni, njm1, nj;
        while(1){
            nim1 = (!i ? INT_MIN : nums1[i - 1]);
            ni = (i == l1 ? INT_MAX : nums1[i]);
            njm1 = (!j ? INT_MIN : nums2[j - 1]);
            nj = (j == l2 ? INT_MAX : nums2[j]);
            if(ni >= njm1 && nj >= nim1) break;
            exp *= 2;
            if(ni < njm1){
                i += (l1 / exp ? l1 / exp : 1);
                j -= (l1 / exp ? l1 / exp : 1);
            }
            else{
                i -= (l1 / exp ? l1 / exp : 1);
                j += (l1 / exp ? l1 / exp : 1);
            }
        }
        return (l1 + l2) % 2 == 1 ? max(nim1, njm1) : ((max(nim1, njm1) + min(ni, nj)) / 2.0);
    }
};