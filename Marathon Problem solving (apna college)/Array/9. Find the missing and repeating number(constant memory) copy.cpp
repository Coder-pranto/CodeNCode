// C++ program to Find the repeating
// and missing elements

#include <bits/stdc++.h>

using namespace std;

void findRepeatingAndMissing(vector<int> &arr)
{
	int n = arr.size();

	cout << "The repeating element is ";
	for (int i = 0; i < n; i++)
	{
		int absValue = abs(arr[i]);
		if (arr[absValue - 1] > 0)
		{
			arr[absValue - 1] = -arr[absValue - 1];
		}
		else
		{
			cout << absValue << "\n";
		}
	}

	cout << "and the missing element is ";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			cout << (i + 1);
			break; // Assuming there is only one missing element
		}
	}
}

int main()
{
	vector<int> arr = {7, 3, 4, 5, 5, 6, 2};
	findRepeatingAndMissing(arr);
	return 0;
}
