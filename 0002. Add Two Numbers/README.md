# [2. Add Two Numbers](https://leetcode-cn.com/problems/add-two-numbers/)

## 题目

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse** order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
```

## 题目大意

给定两个正数，计算两数之和。给定的数以及返回数均以链表形式存储，每个节点存一个位的数。

## 解题思路

直接利用循环结构，将对应位的数相加，并且加上进位。