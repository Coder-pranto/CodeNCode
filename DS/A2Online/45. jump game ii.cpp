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

int jump(vector<int> &nums)
{
    int n = nums.size();
    if(n == 1) return 0;
    int maxreached = 0 + nums[0], i = 0, j, k = 0, steps = 1;

    while (maxreached < n - 1)
    {
        steps++;
        for (j = i + 1; j <= nums[i] + i; j++)
        {
            if (maxreached < nums[j] + j)
            {
                maxreached = nums[j] + j;
                k = j;
            }
        }
        i = k;
    }
    return steps;
}
//or
int jumpii(vector<int> &nums)
{
    int n = nums.size();
    if(n == 1) return 0;
    int maxreached = 0 , steps =0, current = 0;
    for(auto i =0; i<n-1; i++){
        maxreached = max(maxreached, nums[i]+i);
        if(i == current){
            steps++;
            current = maxreached;
        }
        
    }
    return steps;
}

int main()
{
    optimize();
    vector<int>v={3, 4, 5, 2, 3, 1, 4, 2};
    int n =  jump(v);
    cout<<n<<el;

    r0;
}