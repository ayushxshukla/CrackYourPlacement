class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n= nums.size();
        int c=0;
        int ans=0;
        unordered_map<int,int> m;
        m[0]++;
        for(int i=0;i<nums.size();i++){
            c+=nums[i];
            int rem=c%k;
            if(rem<0){
                rem+=k;
            }
            if(m.count(rem)){
                ans+=m[rem];
            }
            m[rem]++;
        }

        return ans;

    }
};