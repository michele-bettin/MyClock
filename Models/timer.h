#ifndef TIMER_H
#define TIMER_H

#include "orario.h"

class Timer : public Orario
{
private:

public:
    Timer(int o=0, int m=0, int s=0);

    const Orario& GetTempoRimanente() const;

    bool HaFinito() const;

    void Avvia(CallBackTimer& c);

    void Avvia();
};

#endif // TIMER_H

std::ostream& operator<<(std::ostream&, const Timer&);
