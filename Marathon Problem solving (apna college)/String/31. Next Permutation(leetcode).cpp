
//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int i = nums.size() - 1;
        while (i > 0 and nums[i] <= nums[i - 1])
        {
            i--;
        }
        if (i > 0)
        {
            int j = i - 1;
            int k = nums.size() - 1;
            while (nums[k] <= nums[j])
            {
                k--;
            }

            swap(nums[k], nums[j]);

            reverse(nums.begin() + i, nums.end());
        }
        else
        {
            reverse(nums.begin(), nums.end());0
        }
    }
};



int main()
{
    optimize();

    r0;
}
