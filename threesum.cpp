class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int newt=-1*(nums[i]);
            int left=i+1;
            int right=n-1;
            while(left<right){
                int value=nums[i]+nums[left]+nums[right];
                if(value==0){
                    ans.insert({nums[i],nums[left],nums[right]});
                }
                if(value<0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        vector<vector<int>> v(ans.begin(),ans.end());
        return v;
    }
};