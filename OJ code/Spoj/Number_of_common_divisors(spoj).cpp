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
#define arrSize(arr)                *(&arr + 1) - arr;                   
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


int nxt()
{
    int x;
    cin>>x;
    return x;
}
long long lxt()
{
    long long x;
    cin>>x;
    return x;
}
double dxt()
{
    double x;
    cin>>x;
    return x;
}
long double ldxt()
{
    long double x;
    cin>>x;
    return x;
}
string sxt()
{
    string x;
    cin>>x;
    return x;
}


#define cs(s) string s; cin>>s;



bool cmp(const pair<int, int> &p, const pair<int, int> &q)
{
    if (p.first < q.first)
        return 1;
    else if (p.first == q.first)
        return (p.second < q.second);
    else
        return 0;
    // AA
}



long long countDivisor(long long n)
{
    long long divisor = 1;
    int c = 0;
    while (n % 2 == 0)
    {
        c++;
        n /= 2;
    }
    divisor *= c + 1;

    for (int i = 3; i * i <= n; i += 2) // modified loop
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            divisor *= cnt + 1;
        }
    }
    if (n > 1)
        divisor *= 2;
    return divisor;
}

ll GCD(ll a, ll b){
    return (b ==0 ? a :GCD(b, a%b));
}

int main()
{
    // FILE
    optimize()
        kase
    {
        ll n, m;
        cin >> n >> m;

        ll g = GCD(n, m);
        cout << countDivisor(g) << el;
    }

    r0;
}


//* Another Approach
/* long long countDivisor(long long n)
{
    int divisor =0;
    for (long long i=1; i*i<=n; i++){
        if(i*i ==n) divisor+=1;
        else if(n%i == 0) divisor+=2;
    }
    return divisor;
}
 */