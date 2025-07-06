class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(auto a: asteroids){
            if(s.empty() || s.top()<0 || a>0){
                s.push(a);
            }
            else if(s.top()==abs(a)){
                s.pop();
            }
            else{
                while(!s.empty() && s.top()>0 && s.top()<abs(a)){
                    s.pop();
                }
                if(!s.empty()&&s.top()>0 && s.top()==abs(a)){
                    s.pop();
                    continue;
                }
                if(s.empty() || (!s.empty() && s.top()<0)){
                    s.push(a);
                    continue;
                }
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};