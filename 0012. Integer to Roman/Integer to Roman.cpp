class Solution {
public:
    string intToRoman(int num) {
        map<int, string, greater<int> > m;
        string ans = "";
        m[1] = "I";
        m[4] = "IV";
        m[5] = "V";
        m[9] = "IX";
        m[10] = "X";
        m[40] = "XL";
        m[50] = "L";
        m[90] = "XC";
        m[100] = "C";
        m[400] = "CD";
        m[500] = "D";
        m[900] = "CM";
        m[1000] = "M";
        for (auto p = m.begin(); p != m.end(); p++) {
            while (num >= p->first) {
                num -= p->first;
                ans.append(p->second);
            }
            if (num == 0) break;
        }
        return ans;
    }
};