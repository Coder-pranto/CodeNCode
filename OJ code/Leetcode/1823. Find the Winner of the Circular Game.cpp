#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n>>k;

    queue<long long> children;
    for (auto i = 1; i <= n; i++)
    {
        children.push(i);
    }

    int winner;

    while (!children.empty())
    {
        for (auto i = 1; i < k; i++)
        {
            children.push(children.front());
            children.pop();
        }
        winner = children.front();
        children.pop();
    }

    cout<<winner<<endl;

    return 0;
}

