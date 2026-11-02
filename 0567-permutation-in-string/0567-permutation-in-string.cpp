class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m= s1.length();
        int n= s2.length();
        if(m>n)return 0;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<m;i++){
            m1[s1[i]-'a']++;
            m2[s2[i]-'a']++;
        }
        if(m1==m2)return 1;
        int x=0;
        int i=m;
        while(i<n){
        m2[s2[i]-'a']++;
        m2[s2[x]-'a']--;
         if(m2[s2[x]-'a'] == 0){
                m2.erase(s2[x]-'a');
            }
        if(m1==m2)return 1;
        i++;
        x++;
        }
        return 0;
    }
};