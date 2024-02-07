
#include <bits/stdc++.h>
using namespace std;

int bs(int arr[], int len, int val)
{
  int l = 0, r = len - 1;
  while (r - l > 1)
  {
    int mid = l + (r - l) / 2;
    if (arr[mid] < val)
      l = mid + 1;
    else
      r = mid;
  }

  if (arr[l] == val)
    return l;
  else if (arr[r] == val)
    return r;
  else
    return -1;
}

int main()
{
  int arr[] = {1, 4, 6, 2, 9, 8, 11, 56, 223, 34};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n);

  cout << "Desired value index: " << bs(arr, n, 11) << endl;

  return 0;
}
