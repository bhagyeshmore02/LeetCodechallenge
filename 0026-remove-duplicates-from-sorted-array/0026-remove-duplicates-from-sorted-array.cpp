class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[num]!=nums[i]){
                nums[num+1]=nums[i];
                num++;
            }
        }
        return num+1;
    }
};