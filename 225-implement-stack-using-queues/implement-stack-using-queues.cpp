class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size() != 1){
            int fro = q1.front();
            q1.pop();
            q2.push(fro);
        }

        int ans = q1.front();
        q1.pop();

        swap(q1, q2);

        return ans;
    }
    
    int top() {
        int ans;
        while(!q1.empty()){
            ans = q1.front();
            q1.pop();
            q2.push(ans);
        }

        swap(q1, q2);

        return ans;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */