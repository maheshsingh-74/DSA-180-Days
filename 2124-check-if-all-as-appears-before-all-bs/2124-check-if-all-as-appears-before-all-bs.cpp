class Solution {
public:
    bool checkString(string s) {
        bool bcheck=0;
        int aidx=-1;
        int bidx=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a')aidx=i;
            if(!bcheck && s[i]=='b'){
                bidx=i;
                bcheck=1;
            }
        }
        if(bidx==-1)return 1;
        return aidx<bidx;
    }
};