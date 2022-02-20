#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            int j;
            if (s[i] != ' ')
            {
                j = i;
                while (s[j] != ' ' && j != s.length())
                    j++;
                reverse(s.begin() + i, s.begin() + j);
            }
            i = j;
        }
        return s;
    }
};

int main()
{
    string s = "Let's take LeetCode contest";
    Solution sol;
    cout << s << '\n';
    cout << sol.reverseWords(s) << '\n';
    return 0;
}