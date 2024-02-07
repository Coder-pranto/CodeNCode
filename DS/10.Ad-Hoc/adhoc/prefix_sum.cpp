
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 3, 4, 5, 6, 11, 10, 2, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        if (l == 0)
        {
            cout << prefix_sum[r] << endl;
        }
        else
        {
            cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
        }
    }

    return 0;
}
