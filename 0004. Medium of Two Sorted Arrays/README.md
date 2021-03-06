# [Median of Two Sorted Arrays](https://leetcode-cn.com/problems/median-of-two-sorted-arrays/)

## 题目

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return **the median** of the two sorted arrays.

Example:

```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
```

**Follow up:** The overall run time complexity should be `O(log (m+n))`.

## 题目大意

给定两个排好序的数组，返回中位数。

## 解题思路

* 这一题最容易想到的方法是把两个数组合并，然后取出中位数。但是将两个有序数组合并的操作`O(m + n)`的，并不符合所要求的时间复杂度。
* 结合题目给定的`O(log (m + n))`的要求，不难想到题目需要我们采取二分法进行中位数的查找。
* 由于题目给定的两个数组长度分别是`m`和`n`，那么我们只需要通过二分法将前`(m+n)/2-1`个数排除。具体方法为，在两个数组中取各取剩下的要排除的一半的数中最大的进行比较，将较小的一个数前面的所有数（包括自身）全部去掉。重复上一步。
* 如果`m+n`为奇数，那么直接取剩下的数中在两个数组中的较小的那个数，如果为偶数，那么在剩下的数中各取两个数组中较小的两个数，进行比较，选出最小的两个数取平均值，就是要求的中位数。
* 此种解法满足题目所要求的时间复杂度。
* 然而还存在一种更优解，其时间复杂度为`O(log min(m, n))`
* 与前面一种解法的思想类似，我们需要将一部分数去除，即小于中位数的数。那么我们会需要在两个数组中个去除一部分数，也可以理解为我们需要在两个数组中画一条分割线，将数组分割为两部分，一部分小于中位数，一部分大于中位数。由于我们确定了需要排除的数的总数量，那么其实只需要确定一个数组的分割线，就能确定另一个数组的分割线。因此我们只需要对较短的那个数组采取二分查找。
* 当我们进行一个分割线移动的时候，另一个分割线也会同时被重新确定。当我们满足了两个数组分割线后的第一个数分别大于另一个数组分割线前的第一个数的时候，就表明我们找到了正确的分割线。
* 由于如果不做任何处理，会出现数组越界的情况，我们采取在两个数组头尾分别加上`INT_MIN`和`INT_MAX`的方法，保证不会产生段错误。

