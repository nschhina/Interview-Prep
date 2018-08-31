#include <stack>
class MinStack {
    using IntPair = std::pair<int, int>;
    std::stack<IntPair> s;
public:
    void push(int x) {
        if (s.empty()) {
            s.emplace(x,x);
        } else {
            int min = s.top().second;
            s.emplace(x, std::min(x, min));
        }
    }

    void pop() { s.pop(); }
    int top() { return s.top().first; }
    int getMin() { return s.top().second; }
};
