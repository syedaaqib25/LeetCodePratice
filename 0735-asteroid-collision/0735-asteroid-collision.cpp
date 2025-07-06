class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s;
        for(auto a: asteroids){
            if(s.empty() || s.back()<0 || a>0){
                s.push_back(a);
            }
            else if(s.back()==abs(a)){
                s.pop_back();
            }
            else{
                while(!s.empty() && s.back()>0 && s.back()<abs(a)){
                    s.pop_back();
                }
                if(!s.empty()&&s.back()>0 && s.back()==abs(a)){
                    s.pop_back();
                    continue;
                }
                if(s.empty() || (!s.empty() && s.back()<0)){
                    s.push_back(a);
                }
            }
        }
        return s;
    }
};