#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int hour, minute, second;
    char c1, c2;
    cin >> hour;
    cin.ignore(1, ':');
    cin >> minute;
    cin.ignore(1, ':');
    cin >> second;
    cin >> c1 >> c2;

    hour = hour % 12;
    if (c1 == 'P')
    {
        hour = hour + 12;
    }
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << "\n";

    return;
}

int main()
{
    solve();
    return 0;
}
