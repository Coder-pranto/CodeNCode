/* 
A binomial coefficient C(n, k) can be defined as the coefficient of x^k in the expansion of (1 + x)^n.

A binomial coefficient C(n, k) also gives the number of ways, disregarding order, that k objects can be chosen from among n objects more formally, the number of k-element subsets (or k-combinations) of a n-element set.

The value of C(n, k) can be recursively calculated using the following standard formula for Binomial Coefficients.  

   C(n, k) = C(n-1, k-1) + C(n-1, k)
   C(n, 0) = C(n, n) = 1 */


   // A naive recursive C++ implementation
#include <bits/stdc++.h>
using namespace std;


int binomialCoeffNaive(int n, int k)
{
	// Base Cases
	if (k > n)
		return 0;
	if (k == 0 || k == n)
		return 1;

	return binomialCoeffNaive(n - 1, k - 1)+ binomialCoeffNaive(n - 1, k);
		
}


int binomialCoeffDP(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
 
    // Calculate value of Binomial Coefficientin bottom up manner Time Complexity: O(n*k) Auxiliary Space: O(n*k)
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
    return C[n][k];
}

int binomialCoeffDP2(int n, int k)
{
    int dp[k + 1];
    memset(dp, 0, sizeof(dp));

    if (k > n)
        return 0;
    if ((n - k) < k)
        k = n - k;

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, k); j > 0; j--)
        {
            dp[j] = dp[j] + dp[j - 1];
        }
    }

    return dp[k];
}

int main()
{
	int n = 5, k = 2;

    //*Naive approach
	cout << "Value of C(" << n << ", " << k << ") is "<< binomialCoeffNaive(n, k);

    //* dp approach
    cout << "Value of C(" << n << ", " << k << ") is "<< binomialCoeffDP(n, k);
    //* dp approach (space optimize)
    cout << "Value of C(" << n << ", " << k << ") is "<< binomialCoeffDP2(n, k);

		
	return 0;
}


