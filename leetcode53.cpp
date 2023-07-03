#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_s = nums[0];
        int min_s = nums[0];
        int result = nums[0];

        for(int i = 1;i < nums.size();i++) {
            int temp_max = max(nums[i], nums[i]+max_s);
            min_s = min(nums[i], nums[i]+max_s);

            result = max(result, temp_max);
            max_s = temp_max;
        }


        return result;
    }
};