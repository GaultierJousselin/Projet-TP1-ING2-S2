#include "fichier.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;

void usefile (std::string name)
{
    ifstream file(name, ios::in);

    if(file)
    {
        //instructions
        file.close();
    }
    else
        std::cout << "Le fichier " << name << " n'est pas utilisable." << std::endl;
}
