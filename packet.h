#ifndef PROJEKT1_PACKET_H
#define PROJEKT1_PACKET_H

#include <iostream>

class Packet
{
    int index;
    int size;
    std::string content;

public:
    Packet(int i, int s, std::string c) : index(i), size(s), content(c) {}
    // Pakiet zawiera stringa z fragmentem wiadomosci, rozmiar (podawany z zewnatrz) oraz indeks ktory pozwoli
    // sledzic kolejnosc pakietu w wiadomosci

    int getIndex() const {return index;}
    std::string getContent() const {return content;}
    int getSize() const {return size;}
};

#endif //PROJEKT1_PACKET_H
