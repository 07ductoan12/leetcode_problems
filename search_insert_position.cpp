#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        priority_queue<int, vector<int>, CustomCompare> myPriorityQueue;
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            myPriorityQueue.push(nums[i]);
        }
        while (!myPriorityQueue.empty())
        {
            cout << myPriorityQueue.top() << ' ';
            myPriorityQueue.pop();
        }
        return true;
    }
    struct CustomCompare
    {
        bool operator()(const int &nums1, const int &nums2)
        {
            return nums1 >= nums2;
        }
    };
};

int main(int argc, const char **argv)
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    sol.containsDuplicate(nums);
    cout << (sol.containsDuplicate(nums) == true) ? "true" : "false";
    return 0;
}