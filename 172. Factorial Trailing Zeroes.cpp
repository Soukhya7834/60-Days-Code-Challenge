class Solution {
public:
    int trailingZeroes(int n) {
        int count =0;
        while(n /=5) {
            cout << n << endl;
            int res = n %5;
            cout << res<< endl;
            count += n;
            
        }
        return count;
        
    }
};

