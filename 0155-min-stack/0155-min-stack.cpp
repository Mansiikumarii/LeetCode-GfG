class MinStack {
public:
    vector<pair<int, int>> nums; // first = actual value, second = current min
    
    MinStack() {
        // constructor doesn't need to do anything here
    }
    
    void push(int val) {
        int min_val;
        if (nums.empty()) {
            min_val = val;
        } else {
            min_val = min(val, nums.back().second); // get min between new val and current min
        }
        nums.push_back({val, min_val}); // push pair of value and current min
    }
    
    void pop() {
        if (!nums.empty())
            nums.pop_back();
    }
    
    int top() {
        if (nums.empty()) return -1; // empty case
        return nums.back().first;    // return the actual value
    }
    
    int getMin() {
        if (nums.empty()) return -1; // empty case
        return nums.back().second;   // return current min
    }
};
