#include <iostream>
#include <cstdlib>

#include "Graph.h"


using namespace std;

int main()
{
    std::string NameFile;
    Graph conseil;

    std::cout << "Veuillez nous indiquez le nom du fichier a ouvrir : " << std::endl;
    std::cin >> NameFile;
    conseil.usefile(NameFile);
    conseil.display();

    cout << "Hello world!" << endl;
    return 0;
}
