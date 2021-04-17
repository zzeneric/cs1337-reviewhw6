include <cstdlib>
include <iostream>
include "Node.h"
include <time.h>

using namespace std;

int main(int argc, char** argv) {
    //This is the node that starts it all
    Node *tail;
    Node* head = new Node();

    //select a random number between 5 and 2,000,000
    srand(time(NULL));
    int size = (rand() % 2000000) + 5;
    int total = 0;
    int counter = 0;
    //print out the size of the list that will be created/destroyed
    cout << "The total size is: " << size << endl;

    head->setValue(0);
    tail = head;
    Node *newNode = new Node;
    for (int i = 1; i < size; i++){  
        Node *newNode = new Node;
        newNode->setValue(i);
        newNode->setNext(NULL);
        tail->setNext(newNode);
        tail = newNode;
    }

    //Create a list that counts from 0 to 2,000,000
    //Link all of the nodes together
    //A for loop is easiest here
    cout << head->getNext()->getValue();

    Node* current = head;
    while (current != NULL){ 
        counter += current->getValue();
        cout << current->getValue();
        current = current->getNext();
        total++;
    }

    //Traverse the list you created and add up all of the values
    //Use a while loop

    //output the number of nodes. In addition, print out the sum
    //of all of the values of the nodes.
    cout << "Tracked " << total << " nodes, with a total count of " << counter << endl;

    //Now loop through your linked structure a third time and
    //delete all of the nodes
    //Again, I require you use a while loop

    cout << "Deleted " << total << " nodes. We're done!" << endl;
    return 0;
}