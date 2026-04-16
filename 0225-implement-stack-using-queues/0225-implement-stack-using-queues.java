class MyStack {
    int arr[], arr2[];
    int front, rear, size;

    public MyStack() {
        size = 1000;
        arr = new int[size];
        arr2 = new int[size];
        front = -1;
        rear = -1;
    }
    
    public void push(int x) {
        // if empty
        if(front == -1) {
            front = 0;
            rear = 0;
            arr[rear] = x;
            return;
        }

        // copy old elements to arr2
        int j = 0;
        for(int i = front; i <= rear; i++) {
            arr2[j++] = arr[i];
        }

        // insert new element at start
        arr[0] = x;

        // copy back old elements
        for(int i = 0; i < j; i++) {
            arr[i + 1] = arr2[i];
        }

        front = 0;
        rear = j;
    }
    
    public int pop() {
        if(front == -1) return -1;

        int val = arr[front];

        if(front == rear) {
            front = rear = -1;
        } else {
            front++;
        }

        return val;
    }
    
    public int top() {
        if(front == -1) return -1;
        return arr[front];
    }
    
    public boolean empty() {
        return front == -1;
    }
}