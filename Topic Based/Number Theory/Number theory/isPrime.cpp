 #include <bits/stdc++.h>
 using namespace std;
 bool isPrime(int n)
    {
      for (int i = 2; i * i <= n; i++) { //* double precision erabar jonno
        if (n % i == 0)return false;
      }
      return true;
    } //* Time Complexity: O(sqrt(n))
 
 int main()
 {   
    int n =7;
    cout<<(isPrime(n)? "prime" : "Not a prime number")<<endl;
    cout<<(isPrime(n+1)? "prime" : "Not a prime number")<<endl;
     return 0;
 }


//* for N element :  O(N(sqrt(n)))
