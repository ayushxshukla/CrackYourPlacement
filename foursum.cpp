class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left=j+1;
                int right=n-1;
                while(left<right){
                    long long value=1ll*nums[i]+nums[j]+nums[left]+nums[right];
                    if(value==target){
                        s.insert({nums[i],nums[j],nums[left],nums[right]});
                    }
                    if(value<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }

        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};