#include <iostream>
#include "Queue.h"
int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);
    queue.display();
    std::cout<<"Deque: "<<queue.dequeue()<<std::endl;
    queue.display();
    std::cout<<"Deque: "<<queue.dequeue()<<std::endl;
    queue.display();
    std::cout<<"Deque: "<<queue.dequeue()<<std::endl;
    queue.display();
    std::cout<<"Peek: "<<queue.peek()<<std::endl;
    queue.display();
    return 0;
}
