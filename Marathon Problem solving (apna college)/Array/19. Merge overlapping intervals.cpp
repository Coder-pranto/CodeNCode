#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>> &v) {
    vector<pair<int, int>> ans;
    int n = v.size();

    sort(v.begin(), v.end());

    int start = v[0].first;
    int end = v[0].second;

    for (auto i = 1; i < n; i++) {
        if (end > v[i].first and end > v[i].second) {
            continue;
        } else if (end > v[i].first and end < v[i].second) {
            end = v[i].second;
        } else {
            ans.emplace_back(start, end);
            start = v[i].first, end = v[i].second;
        }
    }

    ans.emplace_back(start, end);
    return ans;
}

//using stack
vector<pair<int, int>> mergeIntervals2(vector<pair<int, int>> &v) {
    sort(v.begin(), v.end());

    stack<pair<int, int>> merged;
    merged.push(v[0]);

    for (int i = 1; i < v.size(); i++) {
        auto topInterval = merged.top();

        if (topInterval.second >= v[i].first) {
            merged.pop();
            merged.push({topInterval.first, max(topInterval.second, v[i].second)});
        } else {
            merged.push(v[i]);
        }
    }

    vector<pair<int, int>> mergedIntervals;
    while (!merged.empty()) {
        mergedIntervals.push_back(merged.top());
        merged.pop();
    }

    reverse(mergedIntervals.begin(), mergedIntervals.end());

    return mergedIntervals;
}


//without extra space
void mergeIntervals3(vector<pair<int, int>> &v) {
    int n = v.size();
    if (n <= 1) {
        return;
    }

    sort(v.begin(), v.end());

    int idx = 0; // Index to keep track of the modified intervals

    for (int i = 1; i < n; i++) {
        if (v[idx].second >= v[i].first) {
            v[idx].second = max(v[idx].second, v[i].second);
        } else {
            idx++;
            v[idx] = v[i];
        }
    }

    // Resize the vector to include only the merged intervals
    v.resize(idx + 1);
}

int main() {
    vector<pair<int, int>> v = {{1,3},{2,4},{6,8},{9,10}};

   // vector<pair<int, int>> mergedIntervals = mergeIntervals2(v);

    mergeIntervals3(v);
   vector<pair<int, int>> mergedIntervals = v;

    cout << "Merged intervals:" << endl;
    for (const auto &p : mergedIntervals) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}

