class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        // method 1
    //     for(int i =0; i<nums.size(); i++){
    //         for(int j =i+1; j<nums.size(); j++){
    //             if(nums[i] > nums[j]) swap(num[i], nums[j]);
    //         }
    //     }return nums;

        // method 2
        // sort(nums.begin(), nums.end());
        // return nums;

        // method 3
        int minVal = nums[0];
        int maxVal = nums[0];
        for (int num : nums) {
            if (num < minVal) minVal = num;
            if (num > maxVal) maxVal = num;
        }
        
        // 2. Create a frequency array to count occurrences of each number
        vector<int> counts(maxVal - minVal + 1, 0);
        for (int num : nums) {
            counts[num - minVal]++;
        }
        
        // 3. Reconstruct the original array in sorted order
        int index = 0;
        for (int i = 0; i < counts.size(); i++) {
            while (counts[i] > 0) {
                nums[index] = i + minVal;
                index++;
                counts[i]--;
            }
        }
        
        return nums;

    }
};