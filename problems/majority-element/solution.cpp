class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int majorityele = -1;
        for (int i = 0; i < n; i++) {
                int count = 0;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count >= n / 2) {
                majorityele = nums[i];
            }
        }

        return majorityele;
    }
};