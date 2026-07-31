class Solution {
public: int root(int x){
    int i=1;
    int j=x;
    while(i<=j){
      long long int mid=i+(j-i)/2;
        long long sqr=mid*mid;
        if(sqr==x) return (int)mid;
        else if(sqr<x) i=mid+1;
        else j=mid-1;
    }
    return j;
}
    bool isPerfectSquare(int n) {
        if(n==1) return 1;
                int x=root(n);
        return x*x==n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna