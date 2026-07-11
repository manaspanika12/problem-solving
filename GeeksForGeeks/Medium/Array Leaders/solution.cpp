


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
    int n=arr.size();
    int max=INT_MIN;
    vector<int> leader;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max){
            max=arr[i];
            leader.push_back(arr[i]);
        }
    }
    std::reverse(leader.begin(), leader.end());
    return leader;    
    }
};