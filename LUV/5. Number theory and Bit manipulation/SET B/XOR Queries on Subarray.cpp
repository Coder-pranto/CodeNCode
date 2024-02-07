class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
    vector<int> v(arr.size());
    vector<int> w;
    v[0] = arr[0];
    for(int i = 1; i < arr.size(); i++){
        v[i] = v[i-1] ^ arr[i];
    }
    for(auto &u : q){
        int l = u[0];
        int r = u[1];
        if(l == 0){
            w.push_back(v[r]);
        }
        else{
            w.push_back(v[r] ^ v[l-1]);
        }
    }
    return w;
}

        
    
};