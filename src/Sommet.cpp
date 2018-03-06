#include <string>

#include "Sommet.h"

Sommet::Sommet() : m_noms(NULL)
{
    //ctor
}

Sommet::Sommet(std::string nom) : m_noms(nom)
{
    //ctor
}

Sommet::~Sommet()
{
    //dtor
}
