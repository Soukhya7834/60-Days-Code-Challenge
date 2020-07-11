class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string res;
        int n = str1.size();
        for(int i =0; i<n ; i++){
            if(str1.at(i)!= res.at(i)){
                res += str1.at(i);
            }
            break;
        }
        string res2;
        int m = str2.size();
        
        for(int i =0; i<m ; i++){
            if(str2.at(i)!= res2.at(i)){
                res2 += str2.at(i);
            }
            break;
        }
        if(res == res2)
            return res;
        else 
            return "";
    }
};
