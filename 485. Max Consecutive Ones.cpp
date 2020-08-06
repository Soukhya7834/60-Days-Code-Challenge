class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0, c=0;
        
        for(int i=0; i< nums.size(); i++){
            if(nums[i] == 1){
                c++;
                if( c> maxi )
                    maxi =c;
            }
            else
                c =0;
        }
        return maxi;
    }
};
