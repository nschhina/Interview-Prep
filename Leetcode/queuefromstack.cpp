class MyQueue {
public:
    void push(int x) {
        while(!stk.empty())
            aux.push_back(stk.back()),stk.pop_back();
        stk.push_back(x);
        while(!aux.empty())
            stk.push_back(aux.back()),aux.pop_back();
    }
    int pop() {
        int res=stk.back(); stk.pop_back();
        return res;
    }
    int peek() { return stk.back(); }
    bool empty() { return stk.empty(); }
private:
    vector<int> stk,aux;
};
