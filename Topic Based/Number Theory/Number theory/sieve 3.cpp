
#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000
#define lim sqrt(MAX)
bool status[MAX];
int prime[664580];

void sieve()
{
    status[0] = status[1] = 1; // 1 denotes not prime

    for (int i = 3; i <= lim; i += 2) // even numbers are exclusive
    {
        if (status[i] == 0) // 0 denotes prime
        {
            for (int j = i * i; j < MAX; j += i)
                status[j] = 1;
        }
    }

    prime[0] = 2;
    int k = 1;
    for (int i = 3; i < MAX; i += 2) // even numbers are exclusive
    {
        if (status[i] == 0)
            prime[k++] = i;
    }
    // cout<<j-1<<endl;
}

int main()
{

    sieve();
    for(auto i =0; i<50; i++){
        cout<<prime[i]<<" ";
    }
    return 0;
}


/* 
#include <bits/stdc++.h>
using namespace std;
#define MAX  10000007

vector<bool>check(MAX, 1);
vector<int>prime;

void sieve()
{
    check[0] = check[1] = 0;

    for(int i =3; i*i <=MAX; i+=2){
        if(check[i] == true){
            for(int j = i*i; j<=MAX; j+= i+i){
                check[j] = false;
            }
        }
    }

    prime.push_back(2);
    for(int i =3; i<=MAX; i+=2){
        if(check[i] ==  true)
        prime.push_back(i);
    }

    
}

int main()
{

    sieve();
    for(auto i =0; i<50; i++){
        cout<<prime[i]<<" ";
    }
    return 0;
}
 */