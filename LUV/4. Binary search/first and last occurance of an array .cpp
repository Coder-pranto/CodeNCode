//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0


int first(int ar[],int n, int target)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(target==ar[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(target>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}

int last(int ar[],int n, int target)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(target==ar[mid])
        {
            res=mid;
            l=mid+1;
        }
        else if(target>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9};
    int sz = *(&ar + 1) - ar;
    int target;
    cin >> target;
    int firstOccurance = first(ar, sz, target);
    int lastOccurance = last(ar, sz, target);
    cout << "Count of " << target << " : " << (lastOccurance - firstOccurance) + 1 << el;

    r0;
}