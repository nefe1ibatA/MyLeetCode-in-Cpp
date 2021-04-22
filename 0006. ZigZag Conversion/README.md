# [ZigZag Conversion](https://leetcode-cn.com/problems/zigzag-conversion/)

## 题目

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

```
P   A   H   N
A P L S I I G
Y   I   R
```


And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

`string convert(string s, int numRows);`

Example:

```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
```

## 题目大意

将字符串按Z字形排列，按行顺序输出。

## 解题思路

* 行0中的字符位于索引2k * (numRows - 1)处;
* 行numRows -1 中的字符位于索引(2k + 1) * (numRows - 1)处;
* 内部的行i中的字符位于索引2k * (numRows - 1) + i 及 2(k + 1) * (numRows - 1) - i处;

