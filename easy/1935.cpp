class Solution {
public:
    int canBeTypedWords(string s, string brokenLetters) {
        unordered_set<char>st(begin(brokenLetters),end(brokenLetters));
        int flag=1, cnt{};
        for(int i=0;i<s.size();i++){
            if(st.count(s[i]))flag=0;
            if(s[i]==' '|| i==s.size()-1) (flag)?cnt++:flag=1;
        }return cnt;
    }
};