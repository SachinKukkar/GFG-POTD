class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int,int> mp;
        int sum=0,len=0;
        for(int i=0;i<arr.size();i++){
            sum+=(arr[i]==0)?-1:1;
            if(sum==0) len=i+1;
            if(mp.count(sum)) len = max(len,i-mp[sum]);
            else mp[sum]=i;
        }
    return len;}
    
};