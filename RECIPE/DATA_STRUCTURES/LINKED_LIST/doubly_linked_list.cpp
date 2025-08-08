#include <bits/stdc++.h>
using namespace std;

// Doubly linked list storage: { prev, next }
unordered_map<int, pair<int,int>> dll;

// Head & Tail of the list
int headNode = 0, tailNode = 0;

// Add a node at the tail
void addTail(int value) {
    if (dll.empty()) {
        dll[value] = {0, 0};
        headNode = tailNode = value;
    } else {
        dll[tailNode].second = value; // old tail's next = new node
        dll[value] = {tailNode, 0};   // new node's prev = old tail
        tailNode = value;             // move tail pointer
    }
}

// Add a node at the head
void addHead(int value) {
    if (dll.empty()) {
        dll[value] = {0, 0};
        headNode = tailNode = value;
    } else {
        dll[headNode].first = value;  // old head's prev = new node
        dll[value] = {0, headNode};   // new node's prev = null, next = old head
        headNode = value;             // move head pointer
    }
}

// Rotate list so newHead becomes the head
void rotateToHead(int newHead) {
    if (newHead == headNode) return; // already head

    // Connect tail to current head (temporarily circular)
    dll[tailNode].second = headNode;
    dll[headNode].first = tailNode;

    // New tail is the node before newHead
    tailNode = dll[newHead].first;
    dll[tailNode].second = 0; // end of list

    // Break circular link at newHead
    dll[newHead].first = 0;
    headNode = newHead;
}

// Print list from head to tail
void printList() {
    int curr = headNode;
    while (curr != 0) {
        cout << curr << " ";
        curr = dll[curr].second;
    }
    cout << "\n";
}

int main() {
    // Example usage:
    addTail(1);
    addTail(2);
    addTail(3);
    addTail(4);

    cout << "Initial list: ";
    printList();

    addHead(10);
    cout << "After adding head 10: ";
    printList();

    rotateToHead(3);
    cout << "After rotating so 3 is head: ";
    printList();

    return 0;
}
