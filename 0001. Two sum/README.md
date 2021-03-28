# [1. Two Sum](https://leetcode-cn.com/problems/two-sum/)

## 题目

Given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to `target`*.
You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.
You can return the answer in any order.

Example:

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
```

## 题目大意

给定一个数组，找到2个数使得二者之和等于给定的数，返回这2个数在数组中的下标。

## 解题思路

这道题最优的时间复杂度是 O(n)。

顺序扫描数组，对每一个元素通过查询map中是否有符合条件的“另一半”，如果有，直接返回这两个数的下标，如果没有，那么将其存入map，继续扫描。