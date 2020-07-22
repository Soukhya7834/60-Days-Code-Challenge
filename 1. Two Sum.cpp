class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        
        vector<int> result;
        for(int i=0;i<nums.size();i++){
           int NoToFind = target - nums[i];  
            
            if(hash.find(NoToFind)!= hash.end()){
                
                return{hash[target-nums[i]], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }  
};
