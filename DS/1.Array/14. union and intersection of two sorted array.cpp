// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

//* union
vector<int> Unionarray(int arr1[], int arr2[], int n, int m)
{
    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        map[arr2[i]]++;
    }

    vector<int> list;
    for (auto &i : map)
    {
        list.emplace_back(i.first);
    }

    return list;
}

//* Intersection
vector<int> Intersectionarray(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> list;
    while (i < n and j < m)
    {
        if (i > 0 && arr1[i] == arr1[i - 1])
        { // For Handling duplicates
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            list.emplace_back(arr2[j]);
            i++;
            j++;
        }
    }
    return list;
}

// Driver code
int main()
{
	int arr1[] = { 1, 2, 2, 2, 3 };
	int arr2[] = { 2, 3, 3, 4, 5, 5 };
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	cout << "Union is :"<<endl;
	
	vector<int> uni = Unionarray(arr1, arr2, n, m);
	for (auto i : uni)
	{
		cout << i << " ";
	}
    puts("\n");

    cout << "Intersection is :"<<endl;
	vector<int> inter = Intersectionarray(arr1, arr2, n, m);
	for (auto i : inter)
	{
		cout << i << " ";
	}
	return 0;
}


