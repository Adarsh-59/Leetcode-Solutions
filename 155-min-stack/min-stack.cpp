class MinStack {
public:
    stack<int> st;
    int min_num = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        if(val < min_num){
            min_num = val;
        }
    }
    
    void pop() {
        if(st.top() == min_num){
            stack<int> temp = st;
            temp.pop();
            int min_number = INT_MAX;
            while(!temp.empty()){
                min_number = min(min_number, temp.top());
                temp.pop();
            }

            min_num = min_number;
        }
        st.pop();
    }
    
    int top() {
        cout << st.top() << endl;
        return st.top();
    }
    
    int getMin() {
        cout << min_num << endl;
        return min_num;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */