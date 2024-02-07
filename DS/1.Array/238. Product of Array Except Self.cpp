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

//* o(N), o(1)
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    for (auto i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int curr = 1;

    for (auto i = n - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * curr;
        curr = curr * nums[i];
    }

    return ans;
}


//* o(N), o(N)
    vector<int> productExceptSelf2(vector<int> &nums)
    {
       int n = nums.size();
       vector<int> left(n, 1);
       vector<int> right(n, 1);
       vector<int> ans(n, 1);
       for (auto i = 1; i < n; i++)
       {
         left[i] = left[i - 1] * nums[i - 1];
       }

       for (auto i = n - 2; i >= 0; i--)
       {
         right[i] = right[i + 1] * nums[i + 1];
       }

       for (auto i = 0; i < n; i++)
       {
         ans[i] = left[i] * right[i];
       }

       return ans;
    }

int main()
{
    optimize();
   vector<int> v= {1,2,3,4};
   vector<int> ans= productExceptSelf2(v);

   for (size_t i = 0; i < 4; i++)
   {
      cout<<ans[i]<<" ";
   }
   
   
    r0;
}