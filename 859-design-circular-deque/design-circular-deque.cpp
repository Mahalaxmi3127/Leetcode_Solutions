class MyCircularDeque {
    vector<int> q;
    int front, rear, count, size;

public:
    MyCircularDeque(int k) {
        q.resize(k);
        front = 0;
        rear = -1;
        count = 0;
        size = k;
    }

    bool insertFront(int value) {
        if (isFull())
            return false;

        if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            front = (front - 1 + size) % size;
        }

        q[front] = value;
        count++;

        return true;
    }

    bool insertLast(int value) {
        if (isFull())
            return false;

        if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        q[rear] = value;
        count++;

        return true;
    }

    bool deleteFront() {
        if (isEmpty())
            return false;

        if (count == 1) {
            front = 0;
            rear = -1;
            count = 0;
            return true;
        }

        front = (front + 1) % size;
        count--;

        return true;
    }

    bool deleteLast() {
        if (isEmpty())
            return false;

        if (count == 1) {
            front = 0;
            rear = -1;
            count = 0;
            return true;
        }

        rear = (rear - 1 + size) % size;
        count--;

        return true;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return q[front];
    }

    int getRear() {
        if (isEmpty())
            return -1;

        return q[rear];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */