class Solution {
public:


    vector<int> memo;

    bool canReach(vector<int> &nums, int i){
        if(i>=nums.size()-1){
            return true;
        }

        if(memo[i]!=-1){
            return false;
        }

        for(int j=i+1;j<=i+nums[i];j++){
            if(canReach(nums,j)){
                return memo[i]=true;
            }
        }
        return memo[i]=false;
    }
    bool canJump(vector<int>& nums) {
       int n=nums.size();
        memo.resize(10003, -1);
        return canReach(nums,0);
    }
};