class MinStack {
private:
    int peek;
    int arr[100];
public:
    MinStack() {
        peek=-1;
    }
    
    void push(int val) {
        if(peek>99)
            {
                cout<<"Stack Overflow"<<endl;
                return;
            }
        arr[++peek] = val;
    }
    
    void pop() {
        if(peek<0)
        {
            cout<<"No elements to remove"<<endl;
            return;
        }
        peek--;
    }
    
    int top() {
        if(peek == -1)
            {
                cout<<"The stack is empty"<<endl;
                return -1;
            }
        return arr[peek];
    }
    
    int getMin() {
        if(peek == -1)
        {
            cout<<"Array is empty"<<endl;
            return -1;
        }
        int min = INT_MAX;
        for(int i=0; i<=peek; ++i)
        {
            if(arr[i]< min)
                min = arr[i];
        }
        return min;
    }
};
