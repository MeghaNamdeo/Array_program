 int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
    
    sort(arr.begin(), arr.end());
    set<int> s(arr.begin(), arr.end());
    
    if (s.size() < 2) return -1;
    
    vector<int> ans(s.begin(), s.end());
    return ans[ans.size() - 2];
    } 

or

int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    set<int> s;
    
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    
    if (s.size() < 2) return -1;
    
    vector<int> ans;
    for (auto val : s) {
        ans.push_back(val);
    }
    
    return ans[ans.size() - 2];
}


---------------------********************---------------------------
  

