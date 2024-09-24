//
// Created by Andrés Torres on 24/09/24.
//
#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = nullptr;
    }
    ~Queue() {
        while(!isEmpty()) {
            dequeue();
        }
    }
    bool isEmpty();
    void enqueue(int value);
    int peek();
    int dequeue();
    void display();
};

#endif //QUEUE_H
