#include <bits/stdc++.h>
using namespace std;
//question: The Monk and Class Marks
struct pair_compare
{
  bool operator()(const pair<int, string> &a, const pair<int, string> &b) const
  {
    return (a.first != b.first) ? (a.first < b.first) : (a.second > b.second);
  }
};

int main()
{
  int n;
  cin >> n;
  priority_queue<pair<int, string>, vector<pair<int, string>>, pair_compare> pq;
  for (int i = 0; i < n; i++)
  {
    string s;
    int x;
    cin >> s >> x;

    pq.push({x, s});
  }

  while (!pq.empty())
  {
    cout << pq.top().second << " " << pq.top().first << endl;
    pq.pop();
  }

  return 0;
}

/* 

#include <iostream>
#include <queue>
#include <string>
using namespace std;

bool pair_compare(const pair<int, string>& a, const pair<int, string>& b) {
    if (a.first != b.first) {
        return a.first > b.first;
    } else {
        return a.second > b.second;
    }
}

int main() {

    priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(&pair_compare)> pq(&pair_compare);


    pq.push(make_pair(2, "abc"));
    pq.push(make_pair(3, "def"));
    pq.push(make_pair(3, "acb"));
    pq.push(make_pair(5, "ghj"));


    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
} */

/* #include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
    // define a priority queue with custom comparison function using a lambda function
    auto cmp = [](const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        } else {
            return a.second > b.second;
        }
    };
    priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);


    pq.push(make_pair(2, "abc"));
    pq.push(make_pair(3, "def"));
    pq.push(make_pair(3, "acb"));
    pq.push(make_pair(5, "ghj"));


    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
 */


/*  */