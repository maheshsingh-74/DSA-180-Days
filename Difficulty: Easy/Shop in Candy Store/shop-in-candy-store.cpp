class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& p, int k) {
        sort(p.begin(),p.end());
        if(p.size()==1) return {p[0],p[0]};
        int i=0;
        int j=p.size()-1;
        int minn=0;
        int maxx=0;
        while(i<=j){
            minn+=p[i];
            j-=k;
            i++;
        }
        i=0;
        j=p.size()-1;
         while(i<=j){
            maxx+=p[j];
            i+=k;
            j--;
        }
        return {minn,maxx};
    }
};