class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,e=s.size()-1;
        while(l<=e){
            if(!isalnum(s[l])){
                l++;
            }else if(!isalnum(s[e])){
                e--;
            }else{
                char a=tolower(s[l]);
                char b=tolower(s[e]);
                if(a!=b){
                    return false;
                }
                l++;
                e--;
            }
        }
        return true;
    }
};
