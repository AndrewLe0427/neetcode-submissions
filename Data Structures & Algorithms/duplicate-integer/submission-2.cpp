class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashmap;

        for (int i : nums)
        {
            if (!hashmap.insert(i).second)
            {
                return true;                
            }
        }
        
        return false;
    }      
};