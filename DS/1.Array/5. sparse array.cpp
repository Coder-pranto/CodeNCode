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

    int sparse[4][4] = { { 0, 0, 7, 0 },
                         { 1, 0, 0, 0 },
                         { 2, 0, 5, 0 },
                         { 0, 8, 0, 4 } };

                         int cnt=0;
   
    
    for(auto i =0; i<4; i++){
        for(int j =0; j<4; j++){
            if(sparse[i][j] !=0){
                cnt++;
            }
        }
    }

    int arr[3][cnt];
    int col=0;

       for(auto i =0; i<4; i++){
        for(int j =0; j<4; j++){
            if(sparse[i][j] !=0){
                arr[0][col] =i;
                arr[1][col] =j;
                arr[2][col] =sparse[i][j] ;
                col++;
            }
        }
    }

    for(int i =0; i<3; i++){
        for(int j =0; j<cnt; j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<el;
    }

    r0;
}