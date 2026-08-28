// Last updated: 8/28/2026, 2:59:31 PM
class MinStack {
    vector<int> data;
    vector<int> min_data;
public:
    MinStack() {
    }
    
    void push(int value) {
        data.push_back(value);
        if (min_data.empty()) {
            min_data.push_back(value);
        } else {
            min_data.push_back(min(value, min_data.back()));
        }
    }
    
    void pop() {
        data.pop_back();
        min_data.pop_back();
    }
    
    int top() {
        return data.back();
    }
    
    int getMin() {
        return min_data.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */