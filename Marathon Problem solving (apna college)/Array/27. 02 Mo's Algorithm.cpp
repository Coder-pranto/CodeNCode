#include <bits/stdc++.h>
using namespace std;

int block;

bool compare(vector<int> x, vector<int> y)
{
    if (x[0] / block != y[0] / block)
        return x[0] / block < y[0] / block;

    return x[1] < y[1];
}

void queryResults(vector<int> arr, vector<vector< int>> query)
{
    block = (int) sqrt(arr.size());

    sort(query.begin(), query.begin() + query.size(), compare);

    int currL = 0, currR = 0;
    int currSum = 0;

    for (int i = 0; i < query.size(); i++)
    {
        int L = query[i][0], R = query[i][1];

        /*Removing extra Elements*/
        while (currL < L)
        {
            currSum -= arr[currL++];
        }

        /*Adding Elements that are in current Range */
        while (currL > L)
        {
            currSum += arr[--currL];
        }

        while (currR <= R)
        {
            currSum += arr[currR++];
        }

        /*Removing Elements of previous ranges */
        while (currR > R + 1)
        {
            currSum -= arr[--currR];
        }

        /*Printing the sum (in ordered style) */
        cout << "Sum of[" << L << ", " << R <<
            "] is " << currSum << endl;
    }
}


int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (auto &x: arr)
    {
        cin >> x;
    }

    int q;
    cin >> q;
    vector<vector < int>> queries;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        queries.push_back({ l, r });

    }

    queryResults(arr, queries);


    return 0;
}