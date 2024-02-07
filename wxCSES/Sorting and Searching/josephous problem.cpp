// C++ code to Implement Josephus Problem

#include <iostream>
using namespace std;

int JosephusIterative(int N, int k)
{

	int i = 1, ans = 0;

	while (i <= N) {

		ans = (ans + k) % i;
		i++;
	}

	return ans + 1;
}

int JosephusRecursive(int n, int k){
    if(n == 1) return 1;
    else{
       return (JosephusRecursive(n-1,k)+k-1)%n+1;
    }
}

int main()
{

	int N = 7, k = 2;
	cout << JosephusIterative(N, k) << endl;
	cout << JosephusRecursive(N, k) << endl;
	return 0;
}


