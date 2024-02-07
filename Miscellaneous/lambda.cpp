

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    auto sum = [](int x, int y){ return x+y;};
    cout<<sum(4,8)<<endl;

    cout<<[](int x, int y){ return x*y;}(3,2)<<endl;

/* In this example, the auto keyword is used to allow the compiler to deduce the return type of the lambda function. Alternatively, you can specify the return type explicitly using the -> notation, like this */
    auto total = [](int a, int b) -> int {
    return a + b;
};

int result = total(3, 5);
cout<<result<<endl;

/* Lambda functions can also capture variables from the enclosing scope. For example, here is a lambda function that captures a variable x from the enclosing scope and returns its square: */

int x = 5;
auto square = [x]() -> int {
    return x * x;
};

int result2 = square();
cout<<result2<<endl;

    return 0;
}