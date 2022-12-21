#ifndef SVEGLIA_H
#define SVEGLIA_H

#include "orario.h"

class Sveglia : public Orario
{
private:
    Orario* OraAttuale;
public:
    Sveglia(int o=0, int m=0, int s=0, Orario* oA=nullptr);

    Orario GetTempoRimanente() const;

    bool HaFinito() const;
};

#endif // SVEGLIA_H

std::ostream& operator<<(std::ostream& os, const Sveglia& s);
