// BISMILLAHIR RAHMANIR RAHIM

//* count the number in an array
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hash_arr[N];

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash_arr[arr[i]]++;
    }

    int testcase;
    cout << "Testcase: " << endl;
    cin >> testcase;
    while (testcase--)
    {
        int x;
        cin >> x;
        cout << "The number of " << x << " in array: " << hash_arr[x] << endl;
    }

    return 0;
}


/* Here's a question based on your code:

---

**Problem Statement: Count the Number of Occurrences**

You are given an array of integers, and your task is to count the number of occurrences of specific numbers in the array.

Write a program to solve this problem.

**Input:**
- The input consists of two parts:
  1. The first line contains an integer `n` (1 ≤ `n` ≤ 10^5), representing the number of elements in the array.
  2. The second line contains `n` space-separated integers `a[1], a[2], ..., a[n]` (-10^5 ≤ `a[i]` ≤ 10^5), representing the elements of the array.
- The third line contains an integer `testcase` (1 ≤ `testcase` ≤ 10^4), representing the number of test cases to follow.
- Each of the next `testcase` lines contains an integer `x` (-10^5 ≤ `x` ≤ 10^5), representing the number you need to count in the array.

**Output:**
- For each test case, print the number of occurrences of `x` in the array.

**Example:**

Input:
```
5
1 2 2 3 3
3
2
1
3
```

Output:
```
The number of 2 in the array: 2
The number of 1 in the array: 1
The number of 3 in the array: 2
```

**Note:**
- In the given example, there are 2 occurrences of the number 2, 1 occurrence of the number 1, and 2 occurrences of the number 3 in the array. */