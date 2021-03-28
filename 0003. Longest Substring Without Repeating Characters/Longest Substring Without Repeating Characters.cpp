#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> temp;
        int right = -1, left = 0;
        int len = s.size();
        int ans = 0;
        while(left < len){
            while(right + 1 < len && !temp.count(s[right + 1]))
                temp.insert(s[++right]);
            ans = max(ans, right - left + 1);
            if(right + 1 == len) break;
            else{
                while(s[left] != s[right + 1])
                    temp.erase(s[left++]);
                temp.erase(s[left++]);
            }
        }
        return ans;
    }
};