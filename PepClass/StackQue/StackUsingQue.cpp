#include <iostream>
#include <queue>
using namespace std;

class MyStackUsingTwoQueues {
public:
    queue<int> q1;
    queue<int> q2;
    MyStackUsingTwoQueues() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int n = q1.size();
        while(n > 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
            n--;
        }
        int pop = q1.front();
        q1.pop();
        q1 = q2;
        queue<int> emptyQueue; // Empty q2
        swap(q2, emptyQueue);
        return pop;
    }
    
    int top() {
        int n = q1.size();
        while(n > 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
            n--;
        }
        int topEle = q1.front();
        q2.push(topEle);
        q1.pop();
        q1 = q2;
        queue<int> emptyQueue; // Empty q2
        swap(q2, emptyQueue);
        return topEle;
    }
    
    bool empty() {
        return q1.empty();
    }
};

class MyStackUsingSingleQueue {
public:
    queue<int> q;
    MyStackUsingSingleQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
        int n = q.size();
        while (n > 1) {
            q.push(q.front());
            q.pop();
            n--;
        }
    }
    
    int pop() {
        int topElement = q.front();
        q.pop();
        return topElement;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main() {
    // Using two queues
    MyStackUsingTwoQueues stack1;
    stack1.push(1);
    stack1.push(2);
    cout << "Top element using two queues: " << stack1.top() << endl; // Output: 2
    cout << "Pop element using two queues: " << stack1.pop() << endl; // Output: 2
    cout << "Pop element using two queues: " << stack1.pop() << endl; // Output: 1
    cout << "Is stack empty using two queues: " << stack1.empty() << endl; // Output: 1 (true)

    // Using single queue
    MyStackUsingSingleQueue stack2;
    stack2.push(1);
    stack2.push(2);
    cout << "Top element using single queue: " << stack2.top() << endl; // Output: 2
    cout << "Pop element using single queue: " << stack2.pop() << endl; // Output: 2
    cout << "Pop element using single queue: " << stack2.pop() << endl; // Output: 1
    cout << "Is stack empty using single queue: " << stack2.empty() << endl; // Output: 1 (true)

    return 0;
}
