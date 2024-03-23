#ifndef PROJEKT1_STACK_H
#define PROJEKT1_STACK_H

#include "packet.h"

class Node
{
    Packet packet;

public:
    Node *next;
    Node(Packet p) : packet(p), next(nullptr) {}
    // Element stosu, pojedynczy pakiet + wskaznik na kolejny element

    Packet getPacket() const {return packet;}
};

class Stack
{
    Node *top;

public:
    Stack() : top(nullptr) {}
    // Wskaznikowa implementacja stosu skladajacego sie z pakietow

    bool isEmpty();
    // Funkcja sprawdza czy stos jest pusty, true = pusty
    void push(Packet packet);
    // Funkcja dodaje podany pakiet na szczyt stosu
    void pop();
    // Funkcja usuwa pakiet ze szczytu
    Packet getTop() {return top->getPacket();}
};

#endif //PROJEKT1_STACK_H
