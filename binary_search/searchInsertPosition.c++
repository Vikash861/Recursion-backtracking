#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(vector<int> nums, int target, int s, int e)
    {
        
        // for the edge cases 

        if(s >= e && s == nums.size()-1){
            return s + 1;
        }

        if(s >= e)
            return s;


        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }

        if(target < nums[mid])
        {
            return helper(nums, target, s, mid - 1);
        }

        return helper(nums, target, mid + 1, e);
    }

    int searchInsert(vector<int> &nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int ans = helper(nums, target, s, e);
        return ans;
    }
};

int main()
{  
    vector<int>v;
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    
    Solution s1;
    int ans = s1.searchInsert(v,7);
    cout << ans << endl;
}


// 1,3,5,6 = 5
// 1 3 5 6 = 4 

// 3 5 6 7 2  

