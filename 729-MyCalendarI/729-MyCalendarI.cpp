// Last updated: 9/15/2026, 7:28:04 PM
1class MyCalendar {
2    vector<pair<int, int>> calendar_pages;
3public:
4    MyCalendar() {
5
6    }
7    
8    bool book(int startTime, int endTime) {
9        for (int i = 0; i < calendar_pages.size(); i++) {
10            
11            int oldStart = calendar_pages[i].first;
12            int oldEnd = calendar_pages[i].second;
13            
14            if (startTime < oldEnd && endTime > oldStart) {
15                return false; 
16            }
17        }
18        calendar_pages.push_back({startTime, endTime});
19        return true;
20    }
21};
22
23/**
24 * Your MyCalendar object will be instantiated and called as such:
25 * MyCalendar* obj = new MyCalendar();
26 * bool param_1 = obj->book(startTime,endTime);
27 */