# [3. Longest Substring Without Repeating Characters](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/)

## 题目

Given a string `s`, find the length of the **longest substring** without repeating characters.

Example:

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

## 题目大意

找出所给字符串中没有重复字母的最长子串，返回其长度。

## 解题思路

运用双指针和哈希表。在最初将左指针和右指针都指向字符串开头，用右指针向后进行扫描，将扫描到的字符放入哈希表，直到出现冲突，此时移动左指针至在前面的发生冲突的字符的后一个位置，并将途径的字符全部从哈希表中删除。每次右指针扫描结束时，右指针与左指针的间隔即为这次扫描出的字符的长度。

