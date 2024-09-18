// dH 9/18/24
// firstLinkedList.cpp


#include <iostream>
using namespace std;

// Create a struct that will be the nodes of the linked list.
struct Node {
    string dataField;
    Node* pNext;
};

// Create a function that will print the linked list.
// the function will have one parameter, that will be a pointer to Node.
void printList(Node* pNode) {
    while (pNode != nullptr) {
        cout << pNode->dataField << "   ";
        pNode = pNode->pNext;
    }
}

int main() {
    cout << "\n\n ************ My First Linked List Program! ****************" << "\n\n";

    // Create a few pointers to Node
    Node* pHead = new Node;
    Node* pSecond = new Node;
    Node* pThird = new Node;


    Node* pNext = new Node;

    Node myNewNode;
    myNewNode.dataField = "Data in my node struct";

    cout << " stuff in my node: " << myNewNode.dataField << " ";

    // Fill the data fields of the nodes.
    pHead->dataField = "z";
    pSecond->dataField = "b";
    pThird->dataField = "c";

    // Create the list by linking the pointers.
    pHead->pNext = pSecond;
    pSecond->pNext = pThird;
    pThird->pNext = nullptr;

    // Output the linked list.
    // Call the printList function!
    cout << "\n This is my linked list...\n";
    printList(pHead);

    // Add a few nodes to my linked
    Node* pCurrent = new Node;
    pCurrent->dataField = "d";
    pCurrent->pNext = pHead;
    // reposition head of the list.
    pHead = pCurrent;
   

    // Test by calling
    cout << "\n Printing the new list\n";
    printList(pHead);


    return 0;
}
