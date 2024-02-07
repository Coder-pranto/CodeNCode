#include <bits/stdc++.h>

using namespace std;

void printBinary(int num)
{
  for (int i = 10; i >= 0; i--)
  {
    cout << ((num >> i) & 1);
  }
  puts("");
}

int main()
{
  // even or odd

  int x = 3;
  cout << (x & 1 ? "Odd" : "Even") << endl;
  // multiply or divide;

  cout << (10 << 1) << endl; // 10*2 = 20
  cout << (10 >> 1) << endl; // 10/2 = 5

  // power of 2

  cout << (1 << 4) << endl; // 2^4

  // uppercase and lowercase letter

  char letterUpper = 'A';
  char letterLower = 'a';

  cout << "Lowercase : " << char(letterUpper | (1 << 5)) << endl;
  cout << "Lowercase : " << char(letterUpper | ' ') << endl;

  cout << "Uppercase : " << char(letterLower & (~(1 << 5))) << endl;
  cout << "Uppercase : " << char(letterLower & '_') << endl;

  // check is this number 'n' power of 2 or not.

  int num = 16;
  cout << (num & (num - 1) ? "Not power of 2 \n" : "Power of 2 \n");

  // Builtin functions of GCC compiler
  /// This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity( O(log2(n)))
  int parity = 7;
  cout << "Parity of 7 is : " << __builtin_parity(parity) << endl;

  /// This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s. This function only accept unsigned values . O(log2(n))

  cout << "Count of leading zeros before 1 in 16 is : " << __builtin_clz(16) << endl;

  /// This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros.

  cout << "Count of zeros from last to first occurrence of one is : " << __builtin_ctz(16) << endl;

  return 0;
}
