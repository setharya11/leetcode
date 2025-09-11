class Solution {
public:
    bool vo(char a){
        if(a=='a' || a=='A' || a=='e'|| a=='E' || a=='i'|| a=='I'|| a=='o'|| a=='O'|| a=='u'|| a=='U')return 1;
        return 0;
    }
    string sortVowels(string s) {
        int si=s.size();
        string a="";
        int flag=1;

        for(int i=0;i<si;i++){
            if(vo(s[i])){flag=0;a+=s[i];}
        }
        if(flag==1)return s; //  return if no vowel

        sort(begin(a),end(a));

        int ind=0,i=0;
        for(int i=0;i<si;i++){
            if(vo(s[i])){s[i]=a[ind];ind++;}
        }
        return s;
    }
};