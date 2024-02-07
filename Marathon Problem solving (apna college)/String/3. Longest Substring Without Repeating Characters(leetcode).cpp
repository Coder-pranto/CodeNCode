class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string temp = "", mx = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            temp += s[i];
            for (int j = i + 1; j < n; j++) {
                if (temp.find(s[j]) != string::npos) {
                    break;
                }
                temp += s[j];
            }
            if (temp.size() > mx.size()) {
                mx = temp;
            }
            temp = ""; 
        }

        return mx.size();
    }
};
