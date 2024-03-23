#ifndef PROJEKT1_RECEIVER_H
#define PROJEKT1_RECEIVER_H

#include "stack.h"

class Receiver
{
    int packetCount;
    Stack receivedMessage;
    Packet *finalMessage;

public:
    Receiver(int c) : packetCount(c) {};
    void receive(Packet *message);
    // W tej funkcji bedziemy pobierac z Sendera pakiety o losowych indeksach i wrzucac je w wylosowanej kolejnosci
    // do stosu receivedMessage
    void rearrange();
    // W tej funkcji będziemy kolejno wrzucac wedlug indeksow pakiety ze stosu do tablicy zeby odtworzyc wiadomosc
    void saveMixed(std::string fileName);
    //  Funkcja zapisuje w pliku wymieszana wiadomosc
    void saveRearranged(std::string fileName);
    // Funkcja zapisuje odtworzona wiadomosc w pliku
};

#endif //PROJEKT1_RECEIVER_H
