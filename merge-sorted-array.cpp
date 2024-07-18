class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int indexToInsert=m+n-1;
        int rightone=m-1;
        int righttwo=n-1;

        while(righttwo>=0){
            if(rightone>=0&&nums1[rightone]>nums2[righttwo]){
                nums1[indexToInsert]=nums1[rightone];
                rightone--;
            }
            else{
                nums1[indexToInsert]=nums2[righttwo];
                righttwo--;
            }
             indexToInsert--;
        }


    }
};