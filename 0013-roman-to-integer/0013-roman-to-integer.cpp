class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>r {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
            };
        int R=0;
        for(int i=0;i<15;++i){
            if(i+1<15 && r[s[i]]<r[s[i+1]])
                R-=r[s[i]];
            else
                R+=r[s[i]];
        }
        return R;
    }
};