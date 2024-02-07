#include <bits/stdc++.h>
using namespace std;


//* TC: O(sqrt(N))
long long countDivisor(long long n)
{
    int cnt = 0;
    for (size_t i = 1; i*i <= n; i++)
    {
        if(i*i == n) cnt++;
        else if(n%i == 0) cnt+=2;
    }
    return cnt;
}
//* TC: O(sqrt(N)) (sum +count + print= all together)
void countDivisor2(long long n)
{
    int cnt = 0;
    int sum = 0;
    for (size_t i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cnt++;
            sum += i;
            cout << i << "\t" << i << "\n";
        }
        else if (n % i == 0)
        {
            cnt += 2;
            sum += i;
            sum += (n / i);
            cout << i << "\t" << (n / i) << "\n";
        }
    }

    cout << "DivisorCount: " << cnt << " Sum of Divisors: " << sum << "\n";
}





#define M 100000
vector<int> prime;
bitset<M> mark;
vector<int>ls;

void sieve()
{
    for (int i = 2; i * i <= M; i++)
        if (mark[i] == false) // i is a prime
            for (int j = i + i; j <= M; j += i)
                mark[j] = true;

    for (int i = 2; i <= M; i++)
        if (mark[i] == false) // i is a prime
            prime.push_back(i);
}


long long countDivisor3(long long n)
{
    long long divisor = 1;
    for (int i = 0; i < prime.size() && prime[i] <= sqrt(n); i++)
    {
        if (n % prime[i] == 0)
        {
            int cnt = 0;
            while (n % prime[i] == 0)
            {
                cnt++;
                n /= prime[i];
            }
            divisor *= cnt + 1;
        }
    }
    if (n > 1)
        divisor *= 2;
    return divisor;
}


long long Sum_of_Divisor(long long n)
{
    long long total = 1;
    for (int i = 0; i < prime.size(); i++)
    {
        if (n % prime[i] == 0)
        {
            int cnt = 0;
            while (n % prime[i] == 0)
            {
                cnt++;
                n /= prime[i];
            }
            total *= (pow(prime[i], cnt+1) -1)/(prime[i] -1);
        }
    }
    if (n > 1)
    {
        total = n+1;
    }
    return total;
}



int main()
{

//approach 1:  this is efficient for small 'n'
// cout<<countDivisor(36)<<endl;
// cout<<countDivisor(24)<<endl;

// countDivisor2(36);
// countDivisor2(24);

//approach 2: this is efficient for large 'n'
sieve();
cout<<"count : "<<countDivisor3(120)<<endl;
cout<<"Sum of divisors : "<<Sum_of_Divisor(36)<<endl;

cout<<endl;

}
