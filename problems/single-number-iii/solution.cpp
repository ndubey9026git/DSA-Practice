
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int x = 0;

        // XOR all numbers
        for (int num : nums) {
            x ^= num;
        }

        // Find rightmost set bit safely
        unsigned int mask = static_cast<unsigned int>(x);
        mask &= (~mask + 1u);

        int a = 0, b = 0;

        // Divide into two groups
        for (int num : nums) {
            if (static_cast<unsigned int>(num) & mask)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};

