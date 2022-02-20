#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Kadane's Algorithm
        int max_current, max_global;
        max_current = max_global = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            max_current = max(nums[i], max_current + nums[i]);
            if (max_current > max_global)
                max_global = max_current;
        }
        return max_global;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << sol.maxSubArray(nums) << '\n';
    return 0;
}