//better Approach
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
      sort(arr.begin(), arr.end());
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        while (start < end) {
            int sum = arr[start] + arr[end];
            if (sum == target) {
                return true;
            } else if (sum > target) {
                end--;
            } else {
                start++;
            }
        }
        return false;  
    }
};
//TC:O(nlogn), SC:O(1)
