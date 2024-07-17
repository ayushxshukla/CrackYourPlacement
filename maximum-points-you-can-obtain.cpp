class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        long long leftsum=0;
        long long rightsum=0;
        long long maxsum=0;

        for(int i=0;i<k;i++){
            leftsum+=cp[i];
        }
        maxsum=max(leftsum,maxsum);
        int left=k-1;
        int n=cp.size();
        for(int i=n-1;i>=(n-k);i--){
            rightsum+=cp[i];
            leftsum-=cp[left];
            left--;
            maxsum=max(maxsum,leftsum+rightsum);
        }

        return maxsum;
    }
};