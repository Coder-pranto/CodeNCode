
#define all(x)                      (x).begin(),(x).end()

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
  
    sort(all(s));
    string x = s[0], y = s[s.size() - 1], sub = "";
    if (x.length() < y.length())
    {
        swap(x, y);
    }

    int len = x.length();

    for (int i = 0; i < len; i++)
    {
        if (x[i] == y[i])
        {
            sub += (char)x[i];
        }
        else
            break;
    }

      return sub;
    }
};