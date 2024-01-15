class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int total = nums.size();
        int numsOfVal = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (*it == val) {
                nums.erase(it);
                numsOfVal++;
            }
        }
        return total - numsOfVal;
    }
};
