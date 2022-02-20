#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        priority_queue<int, vector<int>, Compare> myQueue;
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            myQueue.push(nums[i]);
        }
        int index, index2;
        index = myQueue.top();
        myQueue.pop();
        while (!myQueue.empty())
        {
            index2 = myQueue.top();
            myQueue.pop();
            if (index == index2)
                return true;
            else
                index = index2;
        }
        return false;
    }
    struct Compare
    {
        bool operator()(const int &nums1, const int &nums2)
        {
            return nums1 >= nums2;
        }
    };
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << (sol.containsDuplicate(nums) == true) ? "true" : "false";
    return 0;
}