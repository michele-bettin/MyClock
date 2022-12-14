#include "orologio.h"

Orologio::Orologio(int o, int min, int sec, int g, int mes, int a,int f)
    : Orario(o, min, sec), Data(g, mes, a), fusoOrario(f)
{}

int Orologio::getFusoOrario() const
{
    return fusoOrario;
}

void Orologio::Avvia(CallBackTimer& c)
{
    Orario::ImpostaOraUTC();
    Orario::ImpostaFusoOrario(fusoOrario);

    c.start(1000, [&]()-> void {

        Avvia();

    });
}

void Orologio::Avvia()
{

        Orario::Avvia();
        Data::Avvia();

}

std::ostream& operator<<(std::ostream& os, const Orologio& o)
{
    return os << "Fuso orario +" << o.getFusoOrario() << "  " << dynamic_cast<const Orario&>(o) << "  " << dynamic_cast<const Data&>(o);
}

