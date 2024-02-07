/* Given two sorted arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.  */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int ar[] = {10, 22, 28, 29, 30, 40};

    int x = 54;

    int m = sizeof(ar) / sizeof(ar[0]);
 
    int i = 0, j = m - 1;
    int axon, bxon;
    int diff = INT_MAX;

    while (i <j )
    {
        if (abs((ar[i] + ar[j]) - x) < diff)
        {
            axon = ar[i];
            bxon = ar[j];
            diff = abs((ar[i] + ar[j]) - x);
        }

        ((ar[i] + ar[j]) > x ? --j : ++i);
    }

    cout << "The closest pair is [" << axon << ", "
         << bxon << "] \n";

    return 0;
}
