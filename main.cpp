///Ce programme a �t� r�alis� par Bazin Paul et Jousselin Gaultier du TD05. Il a �t� finit le 11/03/2018.
///Lien du GitHub utilis� : https://github.com/LyBanjo/Projet-TP1-ING2-S2 .
#include <iostream>
#include <cstdlib>

#include "Graph.h"


using namespace std;

int main()
{
    bool done = false;
    std::string NameFile;
    Graph * conseil;
    conseil = new Graph;
    /// Ici nous demandons le nom du fichier texte � ouvrir.
    std::cout << "Veuillez nous indiquez le nom du fichier a ouvrir : " << std::endl;
    std::cin >> NameFile;
    done = conseil->LoadFile(NameFile);
    while (done == false)
    {
        std::cout << "Veuillez nous indiquez le nom du fichier a ouvrir : " << std::endl;
        std::cin >> NameFile;
        done = conseil->LoadFile(NameFile);
    }
    conseil->DisplayInfluences();
    delete conseil;
    return 0;
}
