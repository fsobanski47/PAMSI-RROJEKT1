#ifndef PROJEKT1_STACK_H
#define PROJEKT1_STACK_H

#include "packet.h"

class Node
{
    Packet packet;

public:
    Node *next;
    Node(Packet p) : packet(p), next(nullptr) {}

    Packet getPacket() const {return packet;}
};

class Stack
{
    Node *top;

public:
    Stack() : top(nullptr) {}

    bool isEmpty();
    void push(Packet packet);
    void pop();
    Packet getTop() {return top->getPacket();}
};

#endif //PROJEKT1_STACK_H
