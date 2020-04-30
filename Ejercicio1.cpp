#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm> 

int main()
{
    std::string linea;
    std::ifstream archivo("input.txt");
    std::vector<int> vect;
    std::getline(archivo, linea);
    bool bandera = true;
    while (bandera)
    {
        for (auto character : linea)
        {
            vect.push_back((int)character);
            if (character == '#')
            {
                bandera = false;
            }
        }
        
        if (bandera)
        {
           if (std::next_permutation(vect.begin(), vect.end()))
           {
               for (auto elements: vect)
               {
                   std::cout << (char) elements;
               }
               std::cout << '\n';
           }
           else
           {
               std::cout << "No Successor";
           }
           
           
        }
        vect.clear();
        std::getline(archivo, linea);
    }
    
    return 0;
}