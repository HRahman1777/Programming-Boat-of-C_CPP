/*
344. Reverse String
- Easy
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size()-1, tmp;
        while(i<=j){
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++, j--;
        }
    }
};
