#include "orario.h"
#include "data.h"
#include <iostream>

#ifndef OROLOGIO_H
#define OROLOGIO_H

class Orologio: public Orario, public Data
{
private:
    int fusoOrario;
public:
    Orologio(int f=0, int o=0, int min=0, int sec=0, int g=0, int mes=0, int a=0);

    int getFusoOrario() const;

    void Avvia(CallBackTimer& c);

    void Avvia();

};

std::ostream& operator<<(std::ostream&, const Orologio&);


#endif // OROLOGIO_H
