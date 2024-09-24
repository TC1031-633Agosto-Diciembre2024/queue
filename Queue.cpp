//
// Created by Andrés Torres on 24/09/24.
//

#include "Queue.h"
#include <iostream>
using namespace std;

bool Queue::isEmpty() {
    return front==nullptr;
}
void Queue::enqueue(int value) {
    Node* newNode= new Node(value);
    newNode->setNext(nullptr);
    if(rear==nullptr) {
        front= rear = newNode;
    }else {
        rear->setNext(newNode);
        rear= newNode;
    }
}

int Queue::peek() {
    if(isEmpty()) {
        cout<<"Queue empty"<<endl;
        return -1;
    }
    return front->getData();
}

int Queue::dequeue() {
    if(isEmpty()) {
        cout<<"Queue empty"<<endl;
        return -1;
    }
    int data= front->getData();
    Node* temp=front;
    front= front->getNext();
    delete temp;
    return data;
}
void Queue::display() {
    cout<<"--FRONT--"<<endl;
    Node* temp= front;
    while(temp!=nullptr) {
        cout<<temp->getData()<<endl;
        temp=temp->getNext();
    }
    cout<<"---REAR--"<<endl;
}