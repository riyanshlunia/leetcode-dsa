
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            if (nums[i] > nums[i + 1]) {
                swap(nums[i], nums[i + 1]);
                i = 0; 
            } else {
                i++;
            }
        }
    }
};
