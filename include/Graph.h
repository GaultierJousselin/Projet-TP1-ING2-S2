#ifndef GRAPH_H
#define GRAPH_H

#include "Arete.h"
#include "Sommet.h"

#include <vector>

class Graph
{
    private:
        std::vector <Arete> m_arete;
        int m_order;
        std::vector <Sommet> m_sommet;

    public:
        Graph();
        virtual ~Graph();

        std::vector <Arete> Getarete() { return m_arete; }
        void Setarete(std::vector <Arete> val) { m_arete = val; }
        int Getorder() { return m_order; }
        void Setorder(int val) { m_order = val; }
        std::vector <Sommet> Getsommet() { return m_sommet; }
        void Setsommet(std::vector <Sommet> val) { m_sommet = val; }

        void usefile (std::string namefile);
        void display();

    protected:


};

#endif // GRAPH_H
