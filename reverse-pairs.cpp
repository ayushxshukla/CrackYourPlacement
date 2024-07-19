class Solution {
public:
    


    long long merge(vector<int> &nums, int low, int mid, int high){
        int left=low;
        int right=mid+1;

        vector<int> temp;
        long long cnt=0;
        while(left<=mid&&right<=high){
            long long l=nums[left];
            long long r=2ll*nums[right];
            if(l>r){
                cnt+=mid-left+1;
                right++;
            }
            else{
                left++;
            }
        }
        left=low;
        right=mid+1;

         while(left<=mid&&right<=high){
            if(nums[left]<nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
 temp.push_back(nums[left]);
                left++;
        }
        while(right<=high){
             temp.push_back(nums[right]);
                right++;
        }

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }

        return cnt;

    }
    long long solve(vector<int> &nums, int low, int high){
        int cnt=0;
        if(low==high){
            return 0;
        }



        long long mid=low+(high-low)/2;
        cnt+=solve(nums,low,mid);
        cnt+=solve(nums,mid+1,high);
        cnt+=merge(nums,low,mid,high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {

        return solve(nums,0,nums.size()-1);

    }
};