#ifndef DATA_H
#define DATA_H


class Data
{
private:
    unsigned int giorno;
    unsigned int mese;
    unsigned int anno;

    const char *NOMI_MESI[];

    const char *GIORNI_MESI[] { "0", "31", "28", "31", "30", "31", "30",
            July, August, September, October, November, December };

public:
    Data();
};

#endif // DATA_H
