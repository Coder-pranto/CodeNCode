#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > subsets(vector<int> &nums)
{
    int len = nums.size();
    int subset_cnt = (1 << len);
    vector<vector<int> >subset_collection;

    for (int mask = 0; mask < subset_cnt; mask++)
    {
        vector<int> single_subset;
        for (int i = 0; i < len; i++)
        {
            if ((mask & (1 << i)) != 0)
                single_subset.push_back(nums[i]);
        }

        subset_collection.push_back(single_subset);
    }

    return subset_collection;
}
int main()
{
    int n; 
    cin>>n;
    vector<int>v;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    auto collection = subsets(v);

    for(auto u: collection){
        for(int w: u){
            cout<<w<<" ";
        }
        cout<<endl;
    }


    return 0;
}