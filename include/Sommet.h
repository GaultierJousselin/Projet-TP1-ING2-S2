#ifndef SOMMET_H
#define SOMMET_H
#include <cstdlib>
#include <string>



class Sommet
{
    private:
        std::string m_noms;

    public:
        Sommet();
        Sommet(std::string nom);
        virtual ~Sommet();

        std::string Getnoms() { return m_noms; }
        void Setnoms(std::string val) { m_noms = val; }

    protected:


};

#endif // SOMMET_H
