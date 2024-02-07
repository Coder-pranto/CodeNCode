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


vector<vector<int>>result;
void twoSum(vector<int>& nums, int a, int l, int r, int target){

    while(l<r){
        if(nums[l] + nums[r] >target){
            r--;
        }else if(nums[l] + nums[r] < target)
        {
            l++;
        }else{
            vector<int>v;
            v.emplace_back(a);
            v.emplace_back(nums[l]);
            v.emplace_back(nums[r]);
            result.emplace_back(v);
            while(l<r and nums[l] == nums[l+1])l++;
            while(l<r and nums[r] == nums[r-1])r--;
            l++;
            r--;
        }
    }

}

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (auto i = 0; i < n-2; i++)
    {
        if (i == 0 || nums[i] != nums[i - 1])
        {
          twoSum(nums,nums[i], i+1, n-1, 0 - nums[i]);
        }
    }

    return result;
}
int main()
{
    optimize();
    vector<int> v= {-1,0,1,2,-1,-4};
    vector<vector<int>> w = threeSum(v);

    for(auto &i : w){
        for(auto &j: i){
            cout<< j << " ";
        }
        cout<<el;
    }

    r0;
}