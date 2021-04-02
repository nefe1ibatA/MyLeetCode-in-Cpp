#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int index1 = 0, index2 = 0, len = 0;
        string ss ="";
        for(int i = 0; i < s.length() - 1; i++){
            int temp = 0;
            while(1){
                if(i - temp == 0) break;
                else if(i + temp == s.length() - 1) break;
                if(s[i - temp - 1] == s[i + temp + 1])
                    temp++;
                else break;
            }
            if(temp > len){
                index1 = index2 = i;
                len = temp;
            }
            temp = 0;
            while(s[i] == s[i + 1]){
                if(temp >= len){
                    index1 = i;
                    index2 = i + 1;
                    len = temp;
                }
                if(i - temp == 0) break;
                else if(i + 1 + temp == s.length() - 1) break;
                if(s[i - temp - 1] == s[i + temp + 2])
                    temp++;
                else break;
            }
        }
        for(int i = index1 - len; i <= index2 + len; i++)
            ss += s[i];
        return ss;
    }
    // Manacher Algorithm
    string longestPalindrome1(string s) {
        string ss = "#";
        for(int i = 0; i < s.length(); i++){
            ss += s[i];
            ss += "#";
        }
        int len = ss.length();
        int rc = 0;
        int right = 0;
        int *p = new int[len]();
        int center = 0;
        int mx = 0;
        for(int i = 0; i < len; i++){
            bool expand = true;
            if(right > i){
                int lc = 2 * rc - i;
                p[i] = p[lc];
                if(i + p[i] > right)
                    p[i] = right - i;
                if(i + p[lc] < right)
                    expand = false;
            }
            if(expand){
                while(i - 1 - p[i] >= 0 && i + 1 + p[i] < len){
                    if(ss[i + 1 + p[i]] == ss[i - 1 - p[i]])
                        p[i]++;
                    else break;
                }
                right = i + p[i];
                rc = i;
                if(p[i] > mx){
                    center = i;
                    mx = p[i];
                }
            }
        }
        string result = "";
        for(int i = center - mx + 1; i <= center + mx; i += 2)
            result += ss[i];
        return result;
    }
};


