#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int num_find = target - nums[i];
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = sol.twoSum(nums, 9);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << ' ';
    return 0;
}