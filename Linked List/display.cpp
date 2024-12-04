#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node *first = NULL;

void create(int A[], int n) {
    int i;
    Node *t, *last;
    first = new Node; // Allocate memory for the first node
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++) {
        t = new Node; // Allocate memory for the next node
        t->data = A[i];
        t->next = NULL;
        last->next = t; // Link the last node to the new node
        last = t; // Update last to the new node
    }
}

void display(Node *p) {
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    return 0;
}
