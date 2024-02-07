class Solution {
public:
    bool isValid(string s) {
    map<char, int> m = {{'(', 1}, {')', -1}, {'{', 2}, {'}', -2}, {'[', 3}, {']', -3}};
    stack<char> stack;
    bool isBalanced = true;

    for (auto c : s)
    {
        if (m[c] > 0)
        {
            stack.push(c);
        }
        else if (m[c] < 0)
        {
            if (stack.empty() || m[stack.top()] + m[c] != 0)
            {
                isBalanced = false;
                break;
            }
            else
            {
                stack.pop();
            }
        }
    }

    if (!stack.empty())
    {
        isBalanced = false;
    }
    return isBalanced;
    
    }
};