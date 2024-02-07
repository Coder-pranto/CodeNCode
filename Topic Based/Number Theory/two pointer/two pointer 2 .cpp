/* Given two sorted arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.  */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int ar1[] = {1, 4, 5, 7};
    int ar2[] = {10, 20, 30, 40};
    int x = 38;

    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    int i = 0, j = n - 1;
    int axon, bxon;
    int diff = INT_MAX;

    while (i < m && j >= 0)
    {
        if (abs((ar1[i] + ar2[j]) - x) < diff)
        {
            axon = ar1[i];
            bxon = ar2[j];
            diff = abs((ar1[i] + ar2[j]) - x);
        }

        ((ar1[i] + ar2[j]) > x ? --j : ++i);
    }

    cout << "The closest pair is [" << axon << ", "
         << bxon << "] \n";

    return 0;
}
