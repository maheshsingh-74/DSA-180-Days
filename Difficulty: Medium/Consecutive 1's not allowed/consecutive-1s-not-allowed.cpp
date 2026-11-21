class Solution {
  public:
    int countStrings(int n) {
        // code here
      //  if(n==0)return 0;
      
     //   if(n==1||n==2)return n+1;
       // return countStrings(n-1)+countStrings(n-2);
    
        if(n == 0) return 1;
               if(n == 1) return 2;

               int a = 1, b = 2;

               for(int i = 2; i <= n; i++) {
                   int c = a + b;
                   a = b;
                   b = c;
               }

               return b;
    }
};