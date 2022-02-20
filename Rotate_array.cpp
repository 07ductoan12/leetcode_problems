#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        // k is step;
        while (k > nums.size())
        {
            k = k - nums.size();
        }
        queue<int> q;
        for (int i = 0; i < nums.size() - k; i++)
        {
            q.push(nums[i]);
        }
        nums.erase(nums.begin(), nums.end() - k);
        while (!q.empty())
        {
            nums.push_back(q.front());
            q.pop();
        }
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    sol.rotate(nums, 3);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    return 0;
}