

//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

/* Given an integer array nums, find the
subarray
with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6. */

class Solution
{
public:
    int maxSubArray(vector<int> &v)
    {

        int len = v.size();
        int sum1 = 0;
        int best1 = v[0];
        for (int i = 0; i < len; i++)
        {
            sum1 += v[i];
            if (sum1 > best1)
            {
                best1 = sum1;
            }
            if (sum1 < 0)
            {
                sum1 = 0;
            }
        }

        return best1;
    }
};

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

int main()
{
    optimize();

    r0;
}