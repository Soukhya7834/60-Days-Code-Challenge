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

OR

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        map <int, int>::iterator it;
        
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                cout << indices[target - nums[i]] << " " << i;
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};
