#ifndef SOMMET_H
#define SOMMET_H
#include <cstdlib>
#include <string>

class Sommet
{
    private:

    public:
        std::string m_noms;
        int m_numb; // Je ne comprend pas à quoi il sert mais il est la.
        Sommet();
        Sommet(std::string nom);
        virtual ~Sommet();

        std::string Getnoms() { return m_noms; }
        void Setnoms(std::string val) { m_noms = val; }
        int Getnumb() { return m_numb; }
        void Setnumb(int val) { m_numb = val; }


    protected:


};

#endif // SOMMET_H
