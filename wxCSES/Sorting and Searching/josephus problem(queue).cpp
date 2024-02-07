#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    queue< long long> children;
    for (auto i = 1; i <= n; i++)
    {
        children.push(i);
    }

    while (!children.empty())
    {
        children.push(children.front());
        children.pop();
        cout << children.front() << " ";
        children.pop();
    }

    return 0;
}
