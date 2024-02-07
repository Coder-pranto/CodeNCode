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




// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int duplicate = -1;
//         int n = nums.size();
//         for(auto i=0; i<n; i++){
//             int current = abs(nums[i]);
//             if(nums[current]<0){
//                 duplicate = current;
//             }
//               nums[current] *=(-1);
//         }
//          //restore array
//         for(auto &u: nums){
//             u = abs(u);
//         }

//         return duplicate;
 
//     }
// };


// class Solution {
// public:

//    int solve(vector<int>& arr, int curr){
//        if(curr == arr[curr]){
//            return arr[curr];
//        }
//          int next = arr[curr];
//          arr[curr] = curr;
//          return solve(arr, next);
//    }

//     int findDuplicate(vector<int>& nums) {
//        int ans = solve(nums, 0);
//         return ans;
//     }
// };



// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         while(nums[0] != nums[nums[0]]){
//             swap(nums[0] , nums[nums[0]]);
//         }

//         return nums[0];
 
//     }
// };

int solve(vector<int>&v, int n){
    int slow, fast;
    slow=fast =0;

    do
    {
        slow = v[slow];
        fast = v[v[fast]];
    } while (slow!=fast);
    
    slow = 0;

    while(slow != fast){
        slow = v[slow];
        fast= v[fast];
    }

    return slow;
}

int main()
{
    optimize();
    vector<int> v = {1,3,4,2,2};
    int ans =solve(v, v.size());
    cout<<ans<<el;

    r0;
}