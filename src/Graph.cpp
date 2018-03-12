#include "Graph.h"

Graph::Graph()
{
    //ctor
}

Graph::~Graph()
{
    //dtor
}

int Graph::LoadFile(std::string namefile)
{
    bool done = false;
    std::string influ1, influ2;
    int forder;
    std::ifstream file(namefile, std::ios::in);
    ///Le if verifie si le fichier a pu être ouvert.
    if(file)
    {
        file >> forder;
        m_order = forder;
        getline(file, influ1);

        ///Boucle for récuperant chaque influenceur.
        for(int i = 0; i < m_order; i++)
        {
            getline(file, influ1);
            m_sommet.push_back(Sommet(influ1));
        }

        ///Boucle for créant les aretes.
        for(int j = 0; j < 5; j++)
        {
            getline(file, influ1);
            getline(file, influ2);
            m_arete.push_back(Arete(Sommet(influ1), Sommet(influ2)));
        }
        done = true;
        file.close();
    }
    else
    {
        std::cout << "Le fichier " << namefile << " n'est pas utilisable." << std::endl;
        done = false;
    }
    return done;
}

void Graph::DisplayInfluences()
{
    std::cout << std::endl << "Voici comment les influenceurs tirent les ficeles entre eux." << std::endl << std::endl;
    ///Ici je parcours le vecteur d'arete du graph et j'affiche le nom des influenceurs ainsi que de leurs influencés
    for(auto elem : m_arete)
    {
        std::cout << elem.m_s2.m_noms << " est le pantin de :" << std::endl;
        std::cout << elem.m_s1.m_noms << std::endl;
    }
}
