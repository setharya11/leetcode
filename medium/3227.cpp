// question : - Vowels Game in a String

class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt{};
        for(auto i:s)   if(i=='a' || i=='e' || i=='i' ||i =='o' || i=='u')cnt++ ;
        return (cnt>0)? 1: 0;
    }
};