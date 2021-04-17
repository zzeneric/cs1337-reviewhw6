#include <iostream>
#include "Stack.h"
#include "Node.cpp"

Stack::Stack(){ // Default constructor
    head = NULL;
}

Stack::Stack(Node* origin){ // Overloaded constructor
    head = origin;
}

void Stack::destroy(Node* head){ // Destroyer
    Node* iterator = head;
    
    while (iterator != 0){
        Node* next = iterator->getNext();
        head = next;
        delete iterator;
        iterator = head;
    }
    
    delete head;
}

Node* Stack::getHead() const{
    return head;
}

void Stack::setHead(Node* newHead){
    head = newHead;
}

