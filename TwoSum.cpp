#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> nums2 = nums;
        vector<int> result;
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            int sum = nums[i] + nums[j];
            if (sum == target)
            {
                for (int ii = 0; ii < nums2.size(); ii++)
                {
                    if (nums2[ii] == nums[i] || nums2[ii] == nums[j])
                        result.push_back(ii);
                }
            }
            if (sum > target)
                j--;
            else
                i++;
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    Solution sol;
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << ' ';
    cout << '\n';
    return 0;
}