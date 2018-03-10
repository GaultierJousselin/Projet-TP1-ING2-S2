#ifndef SOMMET_H
#define SOMMET_H
#include <cstdlib>
#include <string>



class Sommet
{
    private:
        std::string m_noms;
        int m_numb;

    public:
        Sommet();
        Sommet(std::string nom, int numb);
        virtual ~Sommet();

        std::string Getnoms() { return m_noms; }
        void Setnoms(std::string val) { m_noms = val; }
        int Getnumb() { return m_numb; }
        void Setnumb(int val) { m_numb = val; }


    protected:


};

#endif // SOMMET_H
