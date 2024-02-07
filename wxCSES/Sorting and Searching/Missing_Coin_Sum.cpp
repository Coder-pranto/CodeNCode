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


#define maxe *max_element
#define mine *min_element
#define Sum(x) accumulate(all(x),0)
#define bs binary_search
#define mem(x,y) memset(x,y,sizeof(x))
#define memclr(x,y) memset(x,0,sizeof(x))


#define gcd(a, b)                    __gcd(a, b)
#define lcm(a, b)                   ((a)*((b)/gcd(a,b)))
#define mod                          1000000007
#define err                          1e-9
#define pi                           (2*acos ( 0 ) )
#define PI                           3.141592653589793
#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1}; //* top, bottom, left, right, top-left, top-right, bootom-left, bottom-right
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

long long smallestpositive(vector<long long> &arr, int n)
{
    long long int res = 1;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n && arr[i] <= res; i++)
        res = res + arr[i];

    return res;
}

int main()
{
    // FILE
    optimize();

    int n;
    cin >> n;
    vector<ll> v(n);

    for (auto &u : v)
    {
        cin >> u;
    }
    sort(all(v));
    cout << smallestpositive(v, n) << endl;

    return 0;
}
