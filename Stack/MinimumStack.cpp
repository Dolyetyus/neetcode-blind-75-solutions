class MinStack {
public:
    vector<int> stack;
    vector<int> minList;
    int size;
    int min;
    int minSize;

    MinStack() {
        size = -1;
        min = 2147483647;
        minSize = -1;
    }
    
    void push(int val) {
        if (val<=min || size==-1) {
            min = val;
            minList.push_back(min);
            minSize++;
        }
        size++;
        stack.push_back(val);
    }
    
    void pop() {
        if (stack.at(size) == min) {
            minList.pop_back();
            minSize--;
            min = minList[minSize];
        }
        size--;
        stack.pop_back();
    }
    
    int top() {
        return stack.at(size);
    }
    
    int getMin() {
        return minList[minSize];
    }
};
