class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            int first = s1.top();
            s1.pop();
            s2.push(first);
        }

        int ans = s2.top();
        s2.pop();

        while(!s2.empty()){
            int first = s2.top();
            s2.pop();
            s1.push(first);
        }

        return ans;
    }
    
    int peek() {
        int first;
        while(!s1.empty()){
            first = s1.top();
            s1.pop();
            s2.push(first);
        }

        int ans = s2.top();


        while(!s2.empty()){
            first = s2.top();
            s2.pop();
            s1.push(first);
        }

        return ans;
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */