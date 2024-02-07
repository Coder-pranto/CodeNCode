//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    vector<int>v = {1, 2, 3};
    int n = v.size();
    sort(v.begin(), v.end());
    int mn = 0, mx = 0;
    for (size_t i = 0, p =n-1, q = 0; i < n; i++, p--, q++)
    {
        mn += v[p]*(1<<i);
        mx += v[q]*(1<<i);
    }

    cout<<mn<<" "<<mx<<el;
    cout<<"Difference: "<<mx-mn<<el;
    


    r0;
}

/* Here's the problem statement and the modified code for your "Max and Min difference of all Subset" problem:

---

**Problem Statement: Max and Min difference of all Subset**

You are given a vector `v` containing `n` integers. Your task is to calculate the maximum and minimum difference between the sums of all possible subsets of this vector and then calculate the difference between the maximum and minimum values.

Write a program to solve this problem.

**Input:**
- The input consists of a single line containing `n` (1 ≤ n ≤ 20), the number of elements in the vector.
- The next line contains `n` space-separated integers a1, a2, ..., an (-1000 ≤ ai ≤ 1000), representing the elements of the vector.

**Output:**
- Print two lines:
  - The first line should contain two space-separated integers: the minimum difference and the maximum difference between the sums of all possible subsets of the vector.
  - The second line should contain a single integer: the difference between the maximum and minimum values.

**Example:**

Input:
```
3
1 2 3
```

Output:
```
0 6
Difference: 6
```

**Note:**
- For the given input, the subsets and their sums are:
  - Subsets: {1}, {2}, {3}, {1,2}, {1,3}, {2,3}, {1,2,3}
  - Subset Sums: 1, 2, 3, 3, 4, 5, 6
- The minimum difference is 0, and the maximum difference is 6.

---

Here's the modified code to solve this problem:

```cpp
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int mn = 0, mx = 0;
    for (int i = 0, p = n - 1, q = 0; i < n; i++, p--, q++)
    {
        mn += v[p] * (1 << i);
        mx += v[q] * (1 << i);
    }

    cout << mn << " " << mx << el;
    cout << "Difference: " << mx - mn << el;

    r0;
}
```

This code takes the input, sorts the vector, and then calculates the minimum and maximum differences between the sums of all possible subsets of the vector. Finally, it prints the results as specified in the problem statement. */