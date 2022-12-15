#ifndef DATA_H
#define DATA_H

#include <string>
#include "CallBackTimer.h"
#include <iostream>
#include <ctime>
#include <string>


class Data
{
private:
    unsigned int Giorno;
    unsigned int Mese;
    unsigned int Anno;

    static const std::string NOMI_MESI[];

public:
    Data(int g = 0, int m = 0, int a = 0);

    void ImpostaDataCorrente();

    int GetAnno() const;

    std::string GetMese() const;

    int GetGiorno() const;

    virtual void Avvia(CallBackTimer& c);

    virtual void Avvia();
};

std::ostream& operator<<(std::ostream&, const Data&);


#endif // DATA_H
