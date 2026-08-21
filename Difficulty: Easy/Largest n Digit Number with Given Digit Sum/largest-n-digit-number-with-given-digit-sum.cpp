class Solution {
  public:
    string largestNumber(int n, int s) {
        // code here
        string ss="";
        if(9*n<s) return "-1";
        int arr[]={9,8,7,6,5,4,3,2,1};
        for(int i=0;i<9;i++){
            while(s>0 && s>=arr[i]){
                ss.append(1,'0'+arr[i]);
                s-=arr[i];
            }
        }
        while(n>ss.size())ss.append(1,'0');
        return ss;
    }
};