class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int minn=k;
       int curr=0; 
       int i=0;
       int x=0;
       while(i<k){
        if(blocks[i]=='W')curr++;
        i++;
       }
       minn=min(minn,curr);
       while(i<blocks.length()){
        if(blocks[x]=='W')curr--;
        if(blocks[i]=='W')curr++;
        i++;
        x++;
        minn=min(minn,curr);
       }
       return minn;
    }
};