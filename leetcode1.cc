class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
            unordered_map<int , int> m;
            int l = nums.size();
            for(int i = 0; i < l ; i++)
            {
                   int d = target - nums[i];
                   if(m.find(d) != m.end())
                   {
                    return{m[d] , i};
                   }
                   m[nums[i]] = i;
                }
                return {};  
    }
    };