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


//* o(n), o(n)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) {
            return 0;
        }

        int lptr = 0;
        int rptr = n - 1;
        
        vector<int> leftarr(n, 0);
        vector<int> rightarr(n, 0);
        int sum = 0;

        leftarr[0] = height[0];
        rightarr[n - 1] = height[n - 1];

        for (int i = 1; i < n; i++) {
            leftarr[i] = max(leftarr[i - 1], height[i]);
        }
        
        for (int i = n - 2; i >= 0; i--) {
            rightarr[i] = max(rightarr[i + 1], height[i]);
        }

        for (int i = 0; i < n; i++) {
            sum += min(rightarr[i], leftarr[i]) - height[i];
        }

        return sum;
    }
};


//*o(n), o(1)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lptr = 0;
        int rptr = n-1;
        int leftbar = height[lptr];
        int rightbar = height[rptr];
        int sum = 0;

        while(lptr<=rptr){
            if(leftbar<rightbar){
                if(height[lptr]>leftbar){
                    leftbar = height[lptr];
                }else{
                    sum+=(leftbar-height[lptr]);
                    lptr++;
                }
            }else{
                if(height[rptr]>rightbar){
                    rightbar = height[rptr];
                }else{
                    sum +=(rightbar- height[rptr]);
                    rptr--;
                }
            }
        }

        return sum;
        
    }
};


int main()
{
    optimize();

    r0;
}