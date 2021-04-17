#include "Node.cpp"

class Stack{
    public:
        Stack(); // Default constructor
        Stack(Node* origin); // Overloaded constructor (node pointer parameter, assigns head to node passed in)
        // Copy constructor (creates copy of the stack passed in)
        void Stack::destroy(Node* head); // Destructor (deletes linked list)

        Node* Stack::getHead() const; // Accessor
        void Stack::setHead(Node* newHead); // Mutator
    private:
        Node* head; // Head pointer
};