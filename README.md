Driver:

Uruchamiamy program z trzema argumentami, długością wiadomości, rozmiarem pojedynczego pakietu i offsetem. Sprawdzona zostaje ich poprawność, zostają zapisane i wczytana zostaje wiadomość.2

Sposób wysyłania i odbierania wiadomości:
---------------------------------------------------------------------------------------------------------
Sender:

Na wejściu otrzymuje wiadomość, zapisuje ją w tablicy podzieloną na poindeksowane pakiety.
Przetrzymuje tablicę z wiadomością oraz informacje o ilości i rozmiarach pakietów.

Receiver:

Otrzymuje na wejście tablicę z podzielonymi pakietami, przetrzymywaną w Senderze, losowo pobiera z niej pakiety i wrzuca do przetrzymywanej przez niego listy pakietów.
Następnie poprzez funkcję rekonstrukcji wiadomości, pakiety zostają pobrane z listy i ułożone w tablicy w odpowiedniej kolejności, co pozwoli wyświetlić odtworzoną wiadomość.
---------------------------------------------------------------------------------------------------------

Struktury:
---------------------------------------------------------------------------------------------------------
Packet:

Pojedynczy pakiet zawiera indeks (kolejność w wiadomości) rozmiar oraz zawartość wiadomości jako string.

Stack:

Wskaźnikowy stos którego elementami są pakiety, zawiera funkcje sprawdzania czy jest pusty, pushowania i popowania elementów oraz pobierania elementu ze szczytu.
Zostanie użyty w celu przechowania pomieszanej wiadomości, z której pakiety będą kolejno pobierane i wstawiane do tablicy z gotową, odtworzoną wiadomością.
---------------------------------------------------------------------------------------------------------
