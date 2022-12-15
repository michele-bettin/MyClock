#include "data.h"

const std::string Data::NOMI_MESI[] =
{
    "Mese non valido",
    "Gennaio",
    "Febbraio",
    "Marzo",
    "Aprile",
    "Maggio",
    "Giugno",
    "Luglio",
    "Agosto",
    "Settembre",
    "Ottobre",
    "Novembre",
    "Dicembre"
};

Data::Data(int g, int m, int a)
    : Giorno(g), Mese(m), Anno(a)
{}

void Data::ImpostaDataCorrente()
{
    const std::time_t now = std::time(nullptr) ; // get the current time point
    // convert it to (local) calendar time
    const std::tm calendar_time = *std::localtime( std::addressof(now) ) ;

    Giorno = calendar_time.tm_mday;
    Mese = calendar_time.tm_mon;
    Anno = calendar_time.tm_year;
}

int Data::GetAnno() const
{
    return Anno;
}

std::string Data::GetMese() const
{
    return NOMI_MESI[Mese];
}

int Data::GetGiorno() const
{
    return Giorno;
}

void Data::Avvia(CallBackTimer& c)
{

    c.start(1000, [&]()-> void {

        const std::time_t now = std::time(nullptr) ; // get the current time point
        const std::tm calendar_time = *std::localtime( std::addressof(now) ) ;

        (Giorno != (unsigned)calendar_time.tm_mday) && (Giorno = (unsigned)calendar_time.tm_mday);
        (Mese != (unsigned)calendar_time.tm_mon) && (Mese = (unsigned)calendar_time.tm_mday);
        (Anno != ((unsigned)calendar_time.tm_year + 1900)) && (Anno = ((unsigned)calendar_time.tm_year + 1900));

    });
}

void Data::Avvia() {

    const std::time_t now = std::time(nullptr) ; // get the current time point
    const std::tm calendar_time = *std::localtime( std::addressof(now) ) ;

    (Giorno != (unsigned)calendar_time.tm_mday) && (Giorno = (unsigned)calendar_time.tm_mday);
    (Mese != (unsigned)calendar_time.tm_mon) && (Mese = (unsigned)calendar_time.tm_mday);
    (Anno != ((unsigned)calendar_time.tm_year + 1900)) && (Anno = ((unsigned)calendar_time.tm_year + 1900));

}

std::ostream& operator<<(std::ostream& os, const Data& d) {

    return os << d.GetGiorno() << '/' << d.GetMese() << '/' << d.GetAnno();

}









