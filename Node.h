class Node{
    public:
        Node();
        Node(const Node& origin);

        double Node::getOperand() const; // Accessor
        char Node::getOperator() const; // Accessor
        Node* getNext() const; // Accessor

        void Node::setOperand(double operandTo); // Mutator
        void Node::setOperator(char operatorTo); // Mutator
        void setNext(Node* nextTo); // Mutator
    private:
        double operand;
        char operator;
        Node* next;
};