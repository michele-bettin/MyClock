#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#include "orario.h"

class Cronometro : public Orario
{
private:
    unsigned int Centesimi;

public:
    Cronometro(int o=0, int m=0, int s=0, int c=0);

    int GetCentesimi() const;

    void Avvia(CallBackTimer& c);

    void Avvia();

};

#endif // CRONOMETRO_H

std::ostream& operator<<(std::ostream&, const Cronometro&);
