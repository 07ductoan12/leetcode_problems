#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int flag, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            flag = left + (right - left) / 2;
            if (nums[flag] == target)
                return flag;
            else if (target < nums[flag])
                right = flag - 1;
            else
                left = flag + 1;
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    cout << sol.search(nums, 9);
    return 0;
}