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
    kase{
        string s;
        cin>>s;
        unordered_map<char, int>um;
        for(auto i: s){
            um[i]++;
        }
        int flag =0;

        for(auto i: um){
            if((i.second)>1){  // we can create double string if we have any two character occure more than 1.
                flag =1; 
                bb;
            }
        }

        if(flag){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }

    r0;
}

//updated version
// int main()
// {
//     optimize();
//     kase{
//         string s;
//         cin>>s;
//         int n = sz(s);
//         unordered_map<char, int>um;
//         for(auto i: s){
//             um[i]++;
//         }
//         int sum = 0;

//         for(auto i: um){
//             if((i.second)&1){
//                 sum += i.second %2 ;
//             }
//         }
//         // cout<<n<<" "<<sum<<el;
//         if((n-sum)&1 || (n-sum)==0){
//             cout<<"No\n";
//         }else{
//             cout<<"Yes\n";
//         }
//     }

//     r0;
// }