class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int val = abs(nums[i]);
            nums[val - 1] = -(abs(nums[val-1]));
        }
        for(int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0)
            {
                ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};