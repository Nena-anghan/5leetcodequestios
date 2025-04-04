class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char , int> m;
            int l = s.size();
            for(auto i : s)
            {
                m[i]++;
            }
            for(int i = 0; i < l; i++)
            {
                if(m[s[i]] == 1)
                {
                    return i;
                }
            }
            return -1;
        }
    };
