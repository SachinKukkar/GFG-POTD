class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int i=0;
        int j=i;
        int sum=0;
       while(i<n && j<n){
           sum+=arr[j];
           while(sum>target){
               sum-=arr[i];
               i++;
           }
           if(sum==target){
               ans.push_back(i+1);
               ans.push_back(j+1);
               break;
           }j++;
       }
       if(ans.size()==0){
           ans.push_back(-1);
       }
        return ans;
    }
};