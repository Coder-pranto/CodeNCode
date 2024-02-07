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


int dp[205][20010];
bool func(int idx,int sum, vector<int>& nums){
    if( sum == 0) return true;
    if(idx<0) return false;
    if(dp[idx][sum] != -1) return dp[idx][sum];
    int isPossible = func(idx -1, sum, nums);
    if(sum - nums[idx]>=0){
        isPossible = isPossible || func(idx -1, sum -nums[idx], nums);
    }

    return dp[idx][sum] = isPossible;
}

bool canPartition(vector<int> &nums)
{
    memset(dp, -1, sizeof(dp));
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum % 2 != 0)
        return false;
    sum /= 2;
    int len = nums.size();
    return func(len-1, sum, nums);
}

int main()
{
    optimize();

    r0;
}

/* 416. Partition Equal Subset Sum - leetcode
 */