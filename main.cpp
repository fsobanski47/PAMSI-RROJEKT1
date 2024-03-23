#include <iostream>
#include "sender.h"
#include "receiver.h"

class Options
{
public:
    int messageLength;
    int packetSize;
    int offset;

    int processOptions(int argc, char **argv);
};

int Options::processOptions(int argc, char **argv)
{
    if(argc != 4) return -1;
    messageLength = std::atoi(argv[1]);
    packetSize = std::atoi(argv[2]);
    offset = std::atoi(argv[3]);
    return 0;
    //Trzeba dodać inne warunki sprawdzania czy opcje sa poprawne
}

int main(int argc, char **argv) {
    Options options;
    // Sender sender;
    // Receiver receiver;
    // plik, wielkosci itp itd

    if(options.processOptions(argc, argv) == -1) return -1;
    // sprawdzenie czy zostaly podane odpowiednie argumenty
    // nastepnie zostanie wczytana wiadomosc i przekazana do Sendera, z Sendera do Receivera i odwzorowana
    return 0;
}
