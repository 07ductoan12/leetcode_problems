#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> result;
        int i = 0, j = numbers.size() - 1;
        while (i < j)
        {
            if (numbers[i] + numbers[j] == target)
            {
                result.push_back(i + 1);
                result.push_back(j + 1);
            }
            if (numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else
                i++;
        }
        return result;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result = sol.twoSum(nums, 9);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ' ';
    }
    return 0;
}