class Solution {
public:
    string reverseString(string s) {
        char tmp;
        int right = s.size() - 1;
        for(int i = 0; i < s.size()/2 ; i++){
            tmp = s[i];
            s[i] = s[right - i];
            s[right - i] = tmp;
        }
        return s;
    }
};
