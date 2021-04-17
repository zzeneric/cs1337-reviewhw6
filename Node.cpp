#include <iostream>
#include "Node.h"

Node::Node(){ // Default constructor
    next = NULL;
}

Node::Node(const Node& origin){ // Overloaded constructor
    operand = origin.operand;
    operator = origin.operator;
    next = origin.next;
}

double Node::getOperand() const{ // Accessor for operand
    return operand;
}

char Node::getOperator() const{ // Accessor for operator
    return operator;
}

Node* Node::getNext() const{ // Accessor for next
    return next;
}


void Node::setOperand(double operandTo){ // Mutator for operand
    operand = operandTo;
}

void Node::setOperator(char operatorTo){ // Mutator for operator
    operator = operatorTo;
}

void Node::setNext(Node* nextTo){ // Mutator for next
    if(nextTo == NULL)
        next = NULL;
    else
        next = nextTo->next;
}