#include "cronometro.h"

Cronometro::Cronometro(int o, int m, int s, int c)
    : Orario(o, m, s), Centesimi(c)
{}

int Cronometro::GetCentesimi() const
{
    return Centesimi;
}

void Cronometro::Avvia(CallBackTimer &c)
{
    c.start(100, [&]()-> void {

        Avvia();

    });
}

void Cronometro::Avvia()
{
    Centesimi++;
    if (Centesimi >= 10)
    {
        Centesimi = 0;
        Orario::Avvia();
    }
}

std::ostream& operator<<(std::ostream& os, const Cronometro& c1)
{
    return os << dynamic_cast<const Orario&>(c1) << "  " << c1.GetCentesimi();
}
