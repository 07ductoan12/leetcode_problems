#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        queue<int> myQueue;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                myQueue.push(nums[i]);
            }
        }
        int addZero = nums.size() - myQueue.size();
        nums.clear();
        while (!myQueue.empty())
        {
            nums.push_back(myQueue.front());
            myQueue.pop();
        }
        for (int i = 0; i < addZero; i++)
            nums.push_back(0);
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution sol;
    sol.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    return 0;
}