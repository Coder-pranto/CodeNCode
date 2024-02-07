#define all(x)     (x).begin(),(x).end()

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<long long> s(all(nums));
        int len = nums.size();
        int len2 = s.size();
        if(len2 == len){
            return false;
        }

        return true;
    }
};