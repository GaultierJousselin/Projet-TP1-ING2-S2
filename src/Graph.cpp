#include <iostream>
#include <cstdlib>
#include <fstream>

#include "Graph.h"

Graph::Graph()
{
    //ctor
}

Graph::~Graph()
{
    //dtor
}

void Graph::usefile(std::string namefile)
{
    std::ifstream file(namefile, std::ios::in);
    if(file)
    {
        //instructions
        file.close();
    }
    else
        std::cout << "Le fichier " << namefile << " n'est pas utilisable." << std::endl;
}

void Graph::display()
{

}
