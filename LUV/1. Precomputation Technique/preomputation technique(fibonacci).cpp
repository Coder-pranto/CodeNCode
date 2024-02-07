// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> memo;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (memo.count(n) == 1)
    {
        return memo[n];
    }
    int result = fibonacci(n - 1) + fibonacci(n - 2);
    memo[n] = result;
    return result;
}

int main()
{
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}


/* In this example, the fibonacci function recursively computes the Fibonacci numbers. The memoization technique is used to store the previously computed results in a hash map (memo). When a Fibonacci number is computed, the result is stored in the hash map. If the same number is requested again, the function checks if the result is already stored in the hash map and returns it directly.

By using memoization, the fibonacci function avoids redundant computations, resulting in significant performance improvements for large values of n.

Riaj Hasan Pranto
 if (memo.count(n) == 1) {
        return memo[n];
    } explain this line

In this line of code, memo.count(n) is checking if the key n exists in the memo hash map. If the key exists, the function count returns 1, indicating that the key exists. If the key does not exist, count returns 0.

So if memo.count(n) == 1, this means that the Fibonacci number for n has already been computed and stored in the memo hash map. In that case, the function can simply return the precomputed value from the hash map by calling memo[n]. This avoids redundant computations and improves the performance of the program.

If memo.count(n) == 0, this means that the Fibonacci number for n has not been computed yet, and the function needs to compute it. In that case, the function will proceed to compute the Fibonacci number recursively and store the result in the memo hash map for future use. */