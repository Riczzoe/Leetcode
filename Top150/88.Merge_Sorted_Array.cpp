#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp = nums1;
        int k = 0, j = 0;

        for (int i = 0; i < m + n; i++) {
            if (k == m) {
                nums1[i] = nums2[j++];
            } else if (j == n) {
                nums1[i] = temp[k++];
            } else if (temp[k] < nums2[j]) {
                nums1[i] = temp[k++];
            } else {
                nums1[i] = nums2[j++];
            }
        }
    }
};
