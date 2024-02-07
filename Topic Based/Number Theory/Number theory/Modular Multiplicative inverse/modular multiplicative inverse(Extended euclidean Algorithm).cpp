#include<bits/stdc++.h>
using namespace std;

/*Extended Euclidean Algorithm  O(Log(max(a,b)))*/

int gcdExtended(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1, *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = gcdExtended(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}


/*Modular multiplicative inverse Function*/
int modInverse(int a, int m)
{
	int x, y;
	int g = gcdExtended(a, m, &x, &y);
	if (g != 1)  return 0; //"Inverse doesn't exist";
	else
	{
		return  (x%m + m) % m; // to handle negative x
	}
}

int main()
{
    int a = 3, b = 5, m = 1000000007;

    cout << (a * modInverse(b, m)) % m << endl;

    int aa = 6, bb = 2, mm = 5;
    cout << (aa * modInverse(bb, mm)) % mm;
    return 0;
}


/* why in this code x is moded when being returned?

In the modInverse function, the value of x is reduced modulo m before it is returned in the following line:

kotlin

return (x % m + m) % m;

This is done to ensure that the result of the modular inverse is a positive integer between 0 and m-1 inclusive. The reduction is necessary because the value of x obtained using the extended Euclidean algorithm may be negative or greater than m-1.

By taking the value of x modulo m before returning, the function ensures that the result is the smallest non-negative integer that is congruent to x modulo m. The second modulo operation (x % m + m) % m is used to ensure that the result is always positive, even if x is negative.

 */