#include "timer.h"

Timer::Timer(int o, int m, int s)
    : Orario(o, m, s)
{}

const Orario& Timer::GetTempoRimanente() const
{
    return *this;
}

bool Timer::HaFinito() const
{
    return secondi == 0;
}

void Timer::Avvia(CallBackTimer &c)
{
    c.start(1000, [&]()-> void {

        Timer::Avvia();


    });
}

void Timer::Avvia()
{
    secondi--;
}


std::ostream& operator<<(std::ostream& os, const Timer& t)
{
    return os << "Tempo rimasto: " << dynamic_cast<const Orario&>(t);
}
