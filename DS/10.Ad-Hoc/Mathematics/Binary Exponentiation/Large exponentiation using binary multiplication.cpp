
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


const long long int  m =   1e18+7;

//*Large exponentiation using binary multiplication t(n) = O(log^2(N)) */
// a <= 10^18, 2^1024, 
// b= 10^9
long long binMultiply(ll a, ll b){
    ll ans = 0;
    while(b>0){
        if(b&1){
            ans = (ans + a);
        }
        a = (a + a) ;
        b /= 2;
    }
    return ans;
}

long long binExp(long long a, long long b){
    ll ans = 1;
    while(b > 0){
        if (b & 1) {
            ans = binMultiply(ans, a);
        }
        a = binMultiply(a, a);
        b =b/2;
    }
    return ans;
}


int main()
{
   ll a = 3, b = 5; 
   ll result = binExp(a, b);
    cout << result << endl;

    return 0;
}
