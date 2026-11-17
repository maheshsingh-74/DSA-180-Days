class Solution {
public:bool isvowel(char ch){
    return ch=='a'|| ch== 'e'|| ch== 'i'|| ch== 'o'|| ch== 'u';
}
    int maxVowels(string s, int k) {
        int maxx=0;
        int curr=0;
        if(s.length()<k)return 0;
        int i=0;
        while(i<k){
            if(isvowel(s[i]))curr++;
            i++;
        }
        int x=0;
        maxx=max(maxx,curr);
        while(i<s.length()){
            if(isvowel(s[x]))curr--;
            x++;
            if(isvowel(s[i]))curr++;
            i++;
            maxx=max(maxx,curr);
        }
        return maxx;
    }
};