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

int maxSubArraySum(vector<int> &v)
{
    int n = v.size();
    int best = INT_MIN;
    int prod= 1;
    for(int i=0; i<n; i++){
        prod*=v[i];
        if(prod > best){
            best = prod;
        }
        if(prod == 0){
            prod = 1;
        }
        
    }

    prod = 1;

    for(int i = n-1; i>=0; i--){
        prod*=v[i];
        if(prod > best){
            best = prod;
        }
        if(prod == 0){
            prod = 1;
        }
    }

    return best;
}

int maxSubArraySum2(vector<int> &v)
{
    int n = v.size();
    int mx = v[0];
    int mn =v[0];
    int maxProduct= v[0];
    for(int i=1; i<n; i++){
         // element is negative so we swap max and min
        // because when multiplying negative with a negative, number becomes positive so minimum negative number 
        //will become the maximum number
       if(v[i]<0){
        swap(mn,mx);
       }
       mx = max(v[i], mx*v[i]);
       mn = min(v[i], mn*v[i]);
       maxProduct = max(maxProduct, mx);
        
    }

    return maxProduct;
}

int main()
    {
        optimize();
        vector<int> nums = {2,3,-2,4}; 
        int result = maxSubArraySum2(nums);
        cout << "Maximum subarray sum: " << result << std::endl;
        r0;
    }