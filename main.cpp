#include <iostream>
#include <cstdlib>

#include "Graph.h"


using namespace std;

int main()
{
    bool done = false;
    std::string NameFile;
    Graph conseil;
    /// Ici nous demandons le nom du fichier texte à ouvrir.
    std::cout << "Veuillez nous indiquez le nom du fichier a ouvrir : " << std::endl;
    std::cin >> NameFile;
    done = conseil.LoadFile(NameFile);
    while (done == false)
    {
        std::cout << "Veuillez nous indiquez le nom du fichier a ouvrir : " << std::endl;
        std::cin >> NameFile;
        done = conseil.LoadFile(NameFile);
    }
    conseil.DisplayInfluences();
    return 0;
}
