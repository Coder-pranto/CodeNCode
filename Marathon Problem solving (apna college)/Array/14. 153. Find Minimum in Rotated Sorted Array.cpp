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

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int left = 0; 
    int right = n-1;
    int mn = nums[0];
    while(left<=right){
      int mid = left + (right-left)/2;

      if(nums[mid]<mn){
        mn = nums[mid];
      }
      else if( nums[mid] >=nums[left]){
        left = mid+1;
      }else{
        right = mid - 1;
      }
    }

    return mn;
}

int main()
    {
        optimize();
        vector<int> nums = {11,12,13,14}; 
        int result = findMin(nums);
        cout << "Maximum subarray sum: " << result << std::endl;
        r0;
    }