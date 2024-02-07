
    class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        int N = S.length();
        if (N <= 1) {
            return S; 
        }

        string result = "";
        result += S[0]; 
        for (int i = 1; i < N; i++) {
            if (S[i] != S[i - 1]) {
                result += S[i]; 
            }
        }

        return result;
    }
    
};