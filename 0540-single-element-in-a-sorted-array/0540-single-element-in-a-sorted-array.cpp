class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xor_result = 0;
        for (int n : nums) {
            xor_result = xor_result ^ n;
        }
        return xor_result;
    }
};