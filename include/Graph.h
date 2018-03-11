#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>
#include <cstdlib>
#include <fstream>

#include "Sommet.h"
#include "Arete.h"

class Graph
{
    private:
        std::vector <Arete> m_arete;
        std::vector <Sommet> m_sommet;
        int m_order;

    public:
        Graph();
        virtual ~Graph();

        std::vector <Arete> Getarete() { return m_arete; }
        void Setarete(std::vector <Arete> val) { m_arete = val; }
        int Getorder() { return m_order; }
        void Setorder(int val) { m_order = val; }
        std::vector <Sommet> Getsommet() { return m_sommet; }
        void Setsommet(std::vector <Sommet> val) { m_sommet = val; }

        int LoadFile(std::string namefile);
        void DisplayInfluences();

    protected:


};

#endif // GRAPH_H
