class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0, n = s.length();
        if(n==1){
            return false;
        }
        while(i<n){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                st.push(s[i]);
                i++;
                continue;
            }else{
            if(!st.empty() &&((st.top()=='[' && s[i]==']')||(st.top()=='{' && s[i]=='}')||(st.top()=='(' && s[i]==')'))){
                st.pop();
                i++;
                continue;
            }else{
                return false;
            }
            }
        }
        if(st.size()>0){
            return false;
        }
        return true;
    }
};
