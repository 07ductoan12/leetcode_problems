#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int begin, mid, end;
        begin = 0, end = nums.size() - 1;
        while (begin <= end)
        {
            mid = begin + (end - begin) / 2;
            if (nums[mid] == target)
                return mid;
            else if (target > nums[mid])
                begin = mid + 1;
            else
                end = mid - 1;
        }
        return (nums[mid] < target) ? mid + 1 : mid;
    }
};

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    Solution sol;
    cout << sol.searchInsert(nums, 5);
    return 0;
}