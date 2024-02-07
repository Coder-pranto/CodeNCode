//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

typedef long long                        ll;
typedef unsigned long long               llu;
typedef long double                      ld;
typedef vector<int>                      vi;
typedef vector<ll>                       vl;
typedef vector<double>                   vd;
typedef vector<vi>                       vvi;
typedef vector<vl>                       vvl;
typedef pair<int,int>                    pii;
typedef pair<ll, ll>                     pll;
typedef pair<double,double>              pdd;
typedef vector<pii>                      vpi;
typedef vector<pll>                      vpl;
typedef vector<pdd>                      vpd;


#define fr(n)      for(int i=0;i<n;i++)
#define fr1(n)    for(int i=1;i<=n;i++)
#define frr(n)     for(int i=n;i>0;i--)
#define frr1(n)   for(int i=n;i>=0;i--)


#define pb        push_back
#define pf        push_front
#define epb       emplace_back
#define epf       emplace_front
#define pob       pop_back
#define pof       pop_front
#define ins       insert
#define rev       reverse
#define mp        make_pair
#define um        unordered_multiset
#define us        unordered_set
#define lb        lower_bound
#define ub        upper_bound
#define ff        first
#define ss        second
#define bb        break
#define cc        continue
#define el        "\n"
#define r0        return 0


#define kase                        int tc; cin>>tc; for(int z=1;z<=tc;z++)
#define case_print                  cout<<"Case "<<z<<": "
#define dcml(x)                     cout<<fixed<<setprecision(x)
#define sz(x)                       (int )x.size()
#define ele(arr)                    sizeof(arr)/sizeof(arr[0])
#define all(x)                      (x).begin(),(x).end()
#define allr(x)                     (x).rbegin(), (x).rend()
#define alla(x)                     (x),(x+ele(x))
#define sortd(x)                    sort(all(x), greater<int>())
#define sortda(x,sz)                sort(alla(x,sz), greater<int>())
#define make_unique(x)              sort(all(x)); (x).erase(unique(all(x)) ,(x).end());
#define sqr(x)                      ((ll)(x)*(x))
#define pqmin(x)                    priority_queue<x, vector<x>, greater< x > >
#define pq(x)                       priority_queue<x>

#define maxe                       *max_element
#define mine                       *min_element
#define Sum(x)                      accumulate(all(x),0)
#define bs                          binary_search
#define mem(x,y)                    memset(x,y,sizeof(x))
#define memclr(x,y)                 memset(x,0,sizeof(x))

#define gcd(a, b)                    __gcd(a, b)
#define lcm(a, b)                   ((a)*((b)/gcd(a,b)))

#define mod                          1000000007
#define err                          1e-9
#define pi                           (2*acos ( 0 ) )
#define PI                           3.141592653589793
#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FILE                         freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


//* Find all possible subsequence of a string _ Power Set

void powerSet()
{

    vector<string> vec;
    string str = "abc";
    int len = pow(2, str.length());
    for (int i = 1; i < len; i++)
    {
        int j = 0;
        string s = "";
        int x = i;
        while (x)
        {
            if (x & 1)
                s += str[j];
            ++j;
            x = x >> 1;
        }
        vec.emplace_back(s);
    }

    sort(vec.begin(), vec.end());

    for (auto u : vec)
    {
        cout << u << " ";
    }

    cout << endl;
}


//* Count number of bits to be flipped to convert a to b
void flippedNumber(){
    int a =8, b = 6;
    int x = a^b;
    cout<<__builtin_popcount(x)<<endl;
}


//* Different Ways to Divide Integer Number by Two to Make it Zero

void make_A_Number_Zero()
{
    int n = 8, cnt = 0;
    while (n)
    {
        n = n >> 1;
        ++cnt;
    }

    cout << cnt << endl;
}


//* Find First Set Bit In Integer Number

int first_set_bit(int n)
{
    if (!n)
        return -1;
    int cnt = 0;

    while (n)
    {
        ++cnt;
        if (n & 1)
        {
            n = n >> 1;
            break;
        }
        n = n >> 1;
    }

    if (!n)
        return cnt;
    else
        return -1;
}
//* Find if a Number is power of Two
 bool isPowerOfTwo(int n) {
  return n && (!(n & (n - 1)));
} 

//* Find if a Number is power of Two
 bool isPowerOf_Two(int n) {
  if(n ==0) return false;
  else{
    if((n&(n-1)) == 0) return true;
    else return false;
  }
} 

//* count Set Bit In Integer Number
void setBitCount(int n)
{
  int cnt = 0;
  while (n)
  {
    // if(n&1)cnt++;
    cnt += (n & 1);
    n = n >> 1;
  }

  cout << cnt << endl;
}

int main()
{
    // FILE
    optimize()
        // flippedNumber();
        // powerSet();
        // make_A_Number_Zero();
        // cout<<first_set_bit(8)<<endl;
        // cout<<isPowerOf_Two(4)<<endl;
        // cout<<isPowerOfTwo(5)<<endl;
setBitCount(7);
        return 0;
}
