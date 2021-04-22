#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        string ans = "";
        if(numRows == 1) return s;
        int g = (numRows - 1) * 2;
        int num = s.size() / g;
        int r = s.size() % g;
        if(r) num += 1;
        for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < num; j++) {
                if(j * g + i < s.size())
                    ans += s[j * g + i];
                if(i % g != (g - i) % g)
                    if(!(j * g + g - i >= s.size()))
                        ans += s[j * g + g - i];
            }
        }
        return ans;
    }
};