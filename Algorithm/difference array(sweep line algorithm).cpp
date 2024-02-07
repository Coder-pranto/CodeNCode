#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff[n + 2] = {0};
    while (q--)
    {
        int l, r, val;
        cin >> l >> r >> val; //0-based indexed
        diff[l] += val;
        diff[r + 1] -= val;
    }

    for (size_t i = 1; i < n; i++)
    {
        diff[i] += diff[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] += diff[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


/*  370. Range Addition leetcode */
/*

 7 3
2 3 4 5 6 7 8
0 3 2
1 5 1
4 6 3 


output: 4 6 7 8 10 11 11 

*/


/* make it question.md file for better experience 


---

**Problem Statement: Update Array with Difference**

You are given an array of integers `arr` of length `n` and a list of queries. Each query is of the form `(l, r, val)`, where `l` and `r` are indices in the array `arr`, and `val` is an integer. Your task is to update the array `arr` based on these queries and then print the final array.

Initially, all elements of `arr` are set to zero.

For each query `(l, r, val)`, you should perform the following updates:
- Add `val` to `arr[l]`.
- Subtract `val` from `arr[r + 1]`.

After processing all queries, compute the final array by taking the cumulative sum of the updates. The cumulative sum of the updates at index `i` is the sum of all updates from index `0` to `i`.

Write a program to solve this problem.

**Input:**
- The first line of input contains two integers `n` and `q` (1 ≤ `n`, `q` ≤ 1000), where `n` is the length of the array `arr`, and `q` is the number of queries.
- The second line contains `n` space-separated integers representing the initial values of the array `arr`.
- Each of the next `q` lines contains three integers `l`, `r`, and `val` (0 ≤ `l`, `r` < `n`, -1000 ≤ `val` ≤ 1000), representing a query.

**Output:**
- Print a single line containing `n` space-separated integers, which are the elements of the final array `arr` after processing all queries.

**Example:**

Input:
```
7 3
0 0 0 0 0 0 0
0 3 2
1 5 1
4 6 3
```

Output:
```
4 6 7 8 10 11 11
```

**Note:**
- After the first query, the array becomes `[2, 2, 2, 2, 0, 0, 0]`.
- After the second query, the array becomes `[2, 3, 3, 3, 1, 1, 0]`.
- After the third query, the array becomes `[2, 3, 3, 6, 4, 4, 3]`, which is the final array.

---

You can use this problem statement to create a coding challenge or submit it to an online judge for testing your code.

 */