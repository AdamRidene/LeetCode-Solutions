class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>arr;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if(*it==val)
            {
                continue;
            }else
            {
                arr.push_back(*it);
            }
        }
        nums=arr;
        return nums.size();
        
        
    }
};