class MyCalendar {
public: vector<pair<int,int>> events;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
       for(auto& e : events){
            if(startTime < e.second && e.first < endTime){
                return false;
            }
        }
        events.push_back({startTime, endTime});
        return true;  
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */