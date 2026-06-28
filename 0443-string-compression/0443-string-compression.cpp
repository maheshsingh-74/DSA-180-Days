class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        int count = 0;
        int i=0;
        char curr_char;
        while(i<n){
        curr_char=chars[i];
        while(i<n && chars[i]==curr_char){
            i++;
            count++;
        }
         chars[index]=curr_char;
         index++;
        if(count>1){
            string curr_str=to_string(count);
            for(auto &ch:curr_str){
                chars[index]=ch;
                index++;
            }


        }

count=0;
        }
        return index;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna