class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_set<int> difference;
        int diff = 0;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i)
        {
            diff = target - nums[i];
            if (auto finder = difference.find(diff); finder != difference.end())
            {
                auto findValue = find(nums.begin(),nums.end(),diff);
                size_t index = distance(nums.begin(),findValue);
                result.push_back(index);
                result.push_back(i);
                break;
            }
            else
            {
                difference.insert(nums[i]);
            }
        }

        return result;        
    }
};
