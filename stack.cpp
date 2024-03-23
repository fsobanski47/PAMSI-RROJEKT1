#include "stack.h"

bool Stack::isEmpty()
{
    if(top == nullptr) return true;
    else return false;
}

void Stack::push(Packet packet)
{
    Node *newNode = new Node(packet);
    newNode->next = top;
    top = newNode;
}

void Stack::pop()
{
    if(isEmpty()) return;
    Node *tempNode = top;
    top = top->next;
    delete tempNode;
}
