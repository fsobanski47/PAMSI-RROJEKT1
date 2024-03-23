#ifndef PROJEKT1_SENDER_H
#define PROJEKT1_SENDER_H

#include "stack.h"

class Sender
{
    FILE *textFile;
    int packetSize;
    int packetCount;
    Packet *message;

public:
    Sender(FILE *f, int s, int c) : textFile(f), packetSize(s), packetCount(c) {};
    // Wszystkie argumenty będą podane przy uruchomieniu / obliczane w driverze.
    // Kolejne pakiety zapisane zostana w tablicy, więc po inicjalizacji tego obiektu otrzymujemy gotowe podzielone
    // i poindeksowane pakiety gotowe do wyslania do stosu w klasie odbiorcy.

};

#endif //PROJEKT1_SENDER_H
