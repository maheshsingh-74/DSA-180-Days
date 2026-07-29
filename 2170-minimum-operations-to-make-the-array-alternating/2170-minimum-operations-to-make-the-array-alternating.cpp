class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       int n= nums.size();
        int evenfreq[100001]={0};
        int oddfreq[100001]={0};
        for(int i=0;i<n;i++){
            if(i%2==0) evenfreq[nums[i]]++;
            else oddfreq[nums[i]]++;
        }
        int evenfirst=0;
        int evensecond=0;
        for(int i=1;i<100001;i++){
            if(evenfreq[i]>evenfreq[evenfirst]){
                evensecond=evenfirst;
                evenfirst=i;
            }
            else if(evenfreq[i]>evenfreq[evensecond])
            evensecond=i;
        }
          int oddfirst=0;
        int oddsecond=0;
        for(int i=1;i<100001;i++){
            if(oddfreq[i]>oddfreq[oddfirst]){
                oddsecond=oddfirst;
                oddfirst=i;
            }
            else if(oddfreq[i]>oddfreq[oddsecond])
            oddsecond=i;
        }
        int maxx=0;
        if(evenfirst != oddfirst){
            maxx=evenfreq[evenfirst]+oddfreq[oddfirst];
        }
        else {
          int choice1=evenfreq[evensecond]+oddfreq[oddfirst];
           int choice2=evenfreq[evenfirst]+oddfreq[oddsecond];
            maxx= max(choice1,choice2);
        }
        return n-maxx;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna