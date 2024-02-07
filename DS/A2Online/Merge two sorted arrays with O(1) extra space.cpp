#include <bits/stdc++.h>

using namespace std;


void isSortedSecondArray1(int arr2[], int m){
    for(auto j =1; j<m ; j++){
        if(arr2[j-1]>arr2[j]){
            swap(arr2[j-1], arr2[j]);
        }
    }

}
//u can use this checking->then sort the second array put the element in its correct position so that next cycle can swap elements correctly

void isSortedSecondArray2(int arr2[], int m)
{
    int first = arr2[0];
    int j;
    for (j = 1; j < m and arr2[j] < first; j++)
    {
        arr2[j - 1] = arr2[j];
    }
    arr2[j - 1] = first;
}

void merge(int arr1[], int arr2[], int n, int m)
{
   
    for (auto i = 0; i < n; i++)
    {
        // take first element from arr1
        // compare it with first element of second array
        // if condition match, then swap
        if (arr1[i] > arr2[0])
        {
           swap(arr1[i], arr2[0]);

        //    isSortedSecondArray1(arr2, m);
           isSortedSecondArray2(arr2, m);
        }
    }
}
int main()
{
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    cout << "Before merge:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    merge(arr1, arr2, 5, 3);
    cout << "After merge:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }
}

