//* find the missiong value from an array
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    //*1st approach
    int temp[11] = {0};
    for (int i = 1; i < 11; i++)
    {
        temp[arr[i]] = 1;
    }

    int num = 0;
    for (int i = 1; i < 10; i++)
    {
        if (temp[i] == 0)
            num = i;
    }

    cout <<"Ans 1: "<< num << endl;
//*2nd approach
    int x = (10 * (10 + 1)) / 2;
    int y = accumulate(arr, arr + 10, 0);
    cout <<"Ans 2: "<< x-y << endl;

//*3rd Approach

int x1= arr[0];
int y1 = 1;

for(int i = 1; i<10; i++){
    x1 ^= arr[i];
}

for(int i =2; i<11; i++){
    y1 ^= i;
}

cout<<"Ans 3: "<<(x1^y1)<<endl;


    return 0;
}