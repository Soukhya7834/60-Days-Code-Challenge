class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n ==0)
            return 0;
        if(n == 1)
            return 1; 
        vector<int> m;
        vector<int> m2;

        sort(nums.begin(), nums.end());
        int c=1, max=0;
        m.push_back(nums[0]);
        int val = nums[0];
        for(int i =1;i<n;++i){
            m.push_back(nums[i]);
            cout << "enter" << nums[i]<< "\n";
           
            cout << "c = " << c << "\n" ;
             
            if(nums[i] == val || nums[i] != val+1){
                cout << nums[i] << " " << val << "\n";
                m.clear();
                cout << "clear" << "\n";
                c=1;
            }
            else if( nums[i] == val+1)   {
                cout << "enter2" << "\n";
                c++;
                cout << "new c" << c <<"\n";
                val = nums[i];
            }
            if(c>max)
                max = c;
        }
        
        return max;
    }
};
