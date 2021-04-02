# [Longest Palindromic Substring](https://leetcode-cn.com/problems/longest-palindromic-substring/)

## 题目

Given a string `s`, return *the longest palindromic substring* in `s`.

Example:

```
Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.
```

## 题目大意

找出所给字符串中最长的回文子串

## 解题思路

* 最简单的解法不难想到，顺序扫描字符串，以每一位字符为中心向前后扩展，查看是否对称，并记录下当前拥有最长回文串的中心字符位置以及长度。但是还有偶回文串的可能性，此时只要将中心连续的两个相同字符作为中心看待即可。
* 然而本题还有一种时间复杂度为`O(n)`的解法，Manacher算法。
* 这里直接给出详细解释的博客[Manacher Algorithm](https://mp.weixin.qq.com/s?__biz=MzIzMTE1ODkyNQ==&mid=2649410225&idx=1&sn=ed045e8edc3c49a436a328e5f0f37a55&chksm=f0b60f53c7c18645b4c04a69ad314723cce94ed56994d6f963c2275a2db8d85f973f15f508e4&mpshare=1&scene=23&srcid=1001JCsBlpxgUWjgixasChNQ#rd)
* 两种解法都写在了.cpp文件中