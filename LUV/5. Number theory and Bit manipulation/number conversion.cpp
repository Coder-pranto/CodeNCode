#include <bits/stdc++.h>

using namespace std;
void decimal_to_binary(int decimal_num)
{
  int binary_num = 0, base = 1, remainder;

  while (decimal_num > 0)
  {
    remainder = decimal_num % 2;
    binary_num = binary_num + remainder * base;
    base = base * 10;
    decimal_num = decimal_num / 2;
  }

  cout << "The binary equivalent is: " << binary_num << endl;
}

void binary_to_decimal(long long binary_num)
{
    long long decimal_num = 0;
    int i = 0, remainder;

    while (binary_num != 0) {
        remainder = binary_num % 10;
        binary_num /= 10;
        decimal_num += remainder * pow(2, i);
        ++i;
    }

    cout << "The decimal equivalent is: " << decimal_num << endl;
}

void binary_to_octal(long long binary)
{
        int octal = 0, place = 1;

    while(binary > 0){
        octal += (binary % 10) * place;
        binary /= 10;
        place *= 2;
    }

    cout << "The octal equivalent is: " << octal << endl;
}

void binary_to_hexaDecimal(long long binary_num)
{
    string hex_num = "";
    string hex_digits = "0123456789ABCDEF";

    while (binary_num != 0) {
        int digit = 0;
        for (int i = 0; i < 4; i++) {
            digit += binary_num % 10 * (1 << i);
            binary_num /= 10;
        }
        hex_num = hex_digits[digit] + hex_num;
    }

    cout << "Hexadecimal equivalent: " << hex_num << endl;
}

int main()
{

  int decimal_num;
  cout << "Enter a decimal number: ";
  cin >> decimal_num;
  decimal_to_binary(decimal_num);
//   decimal_to_octal(decimal_num);
//   decimal_to_hexaDecimal(decimal_num);


  int binary_num;
  cout << "Enter a binary number: ";
  cin >> binary_num;
  binary_to_decimal(binary_num);
  binary_to_octal(binary_num);
  binary_to_hexaDecimal(binary_num);

  return 0;
}

