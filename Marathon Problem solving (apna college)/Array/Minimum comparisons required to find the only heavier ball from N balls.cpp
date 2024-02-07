// C++ code to implement above approach
#include <bits/stdc++.h>
using namespace std;

// Recursive function to find
// minimum number of weighing required
int solve(int N)
{
	if (N == 0 or N ==1)
		return 0;

	float rec = N;
	return (solve(ceil(rec / 3.0)) + 1);
}

int solve2(int N)
{
	int mini = ceil(log(N) / log(3));
	return mini;
}

int main()
{
	int N = 5;
	cout << solve(N)<<"\n";
	cout << solve2(N);
	return 0;
}



