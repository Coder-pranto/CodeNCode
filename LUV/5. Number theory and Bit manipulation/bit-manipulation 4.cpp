#include <bits/stdc++.h>
using namespace std;

//*bit masking


//*problem :  There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
// explanation: https://codeforces.com/blog/entry/73558
int main()
{

   int n ;
   cin>>n;

   vector<int>masks(n, 0);

   for(int i =0; i<n; i++){
    int days;
    cin>>days;
    int mask =0;
    for(int j =0; j<days; j++){
        int day;
        cin>>day;
        mask = (mask | (1<<day));
    }
    masks[i] = mask;
   }

   int maxDays =0, p1=0, p2= 0;
    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            int common_days = __builtin_popcount(masks[i]&masks[j]);
            if(common_days>maxDays){
                maxDays = common_days;
                p1 = i;
                p2 = j;
            }
        }
    }

    cout<<p1<<" "<<p2<<" "<<maxDays<<endl;

    return 0;
}


// input: noofworker, noofdays, days
// 5
// 4
// 1 4 7 9
// 6
// 2 9 2 7 25 29
// 7
// 1 23 4 7 9 11 29
// 10
// 2 28 8 7 9 10 30 21 18 19
// 4
// 1 11 29 7
