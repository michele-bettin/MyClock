#include "orario.h"


bool IsInRange(int numero, int from, int to)
{
    return numero >= from && numero <= to;
}

unsigned int const Orario::SECONDI_MINUTO = 60;
unsigned int const Orario::SECONDI_ORA = 3600;
unsigned int const Orario::SECONDI_GIORNO = 86400;
unsigned int const Orario::ORE_GIORNO = 24;

Orario::Orario(int ore, int minuti, int sec)
{
    if (IsInRange(ore, 0, 23) && IsInRange(minuti, 0, 60) && IsInRange(sec, 0, 60))
        secondi = ore * 3600 + minuti * 60 + sec;
    else
        secondi = 0;
}

Orario::~Orario()
{}

int Orario::Ore() const {
    return secondi / SECONDI_ORA;
}

int Orario::Minuti() const {
    return (secondi / SECONDI_MINUTO) % SECONDI_MINUTO;
}

int Orario::Secondi() const {
    return secondi % SECONDI_MINUTO;
}

void Orario::SetSecondi(int s) {
    secondi = s;
}

void Orario::AvanzaDiUnOra() {
    secondi += SECONDI_ORA;
}

void Orario::AvanzaDiUnMinuto() {
    secondi += SECONDI_MINUTO;
}

void Orario::AvanzaDiUnSecondo() {
    secondi++;
}


Orario operator+(const Orario& o1, const Orario& o2) {
    Orario aux;
    aux.secondi = (o1.secondi + o2.secondi) % Orario::SECONDI_GIORNO;
    return aux;
}

Orario operator-(const Orario& o1, const Orario& o2)
{
    Orario aux;
    aux.secondi = (o1.secondi - o2.secondi) % Orario::SECONDI_GIORNO;
    return aux;
}

bool operator==(const Orario& o1, const Orario& o2)
{
    return o1.secondi == o2.secondi;
}

bool operator>(const Orario& o1, const Orario& o2)
{
    return o1.secondi > o2.secondi;
}

bool operator<(const Orario& o1, const Orario& o2)
{
    return o1.secondi < o2.secondi;
}

std::ostream& operator<<(std::ostream& os, const Orario& o)
{
    return os << o.Ore() << ':' << o.Minuti() << ':' << o.Secondi();
}
