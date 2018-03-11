#ifndef ARETE_H
#define ARETE_H
#include "Sommet.h"

class Arete
{
    private:

    public:
        Sommet m_s1;
        Sommet m_s2;
        Arete();
        Arete(Sommet s1, Sommet s2);
        virtual ~Arete();

        Sommet Gets1() { return m_s1; }
        void Sets1(Sommet val) { m_s1 = val; }
        Sommet Gets2() { return m_s2; }
        void Sets2(Sommet val) { m_s2 = val; }
};

#endif // ARETE_H
