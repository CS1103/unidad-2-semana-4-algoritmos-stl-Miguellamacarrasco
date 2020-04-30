#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm> 
#include <fstream>

int main()
{
    int test_cases, train_lenght, number, size_of_number;
    std::string linea;
    std::cin >> test_cases;
    std::vector<int> vect;
    std::ifstream archivo("input.txt");
    int lowest_number;
    for (int i=0; i<test_cases+1;i++)
    {
        std::cin >> train_lenght;
        std::cin >> linea;
        for (auto characters: linea)
        {
            if (characters != ' ' || characters != '\\' || characters != 'n')
            {
                number += std::pow(10,size_of_number)*((int)characters-48);
            }
            else
            {
                vect.push_back(number);
            }
        }
        int y, x;
        for (auto numero : vect)
        {
            for (auto numero2: vect)
            {
                if (numero2 < numero)
                {
                    std::iter_swap(vect.begin() + y, vect.begin() + x);
                }
                x++;
            }
            y++;
        }
    }
    
    

    return 0;

}