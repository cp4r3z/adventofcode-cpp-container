#include <string>
#include <vector>
#include <iostream> // cout
#include <fstream>  // ifstream
#include <numeric>  // accumulate

// #include "solution01.h"

using namespace std;

string INPUT_PATH = "src/2020/solution01_input.txt";

int main()
{
    // Read the input file into a vector
    vector<int> entities;
    string line;

    ifstream inputFile(INPUT_PATH);
    while (getline(inputFile, line))
    {
        entities.push_back(stoi(line));
    }
    inputFile.close();

    for (auto x : entities)
    {
        // cout << x << ' ';
    }

    for (size_t i = 0; i < entities.size(); i++)
    {
        /* code */
    }

    bool answerFound = false;

    for (std::size_t i = 0; i != entities.size(); ++i)
    {
        // access element as v[i]
        if (answerFound)
            break;

        for (std::size_t j = 0; j != entities.size(); ++j)
        {
            // access element as v[j]
            if (entities[i] + entities[j] == 2020)
            {
                cout << entities[i] << " x " << entities[j] << " = " << entities[i] * entities[j] << endl;
                answerFound = true;
                break;
            }
        }
    }

    bool part2Found = false;

    for (std::size_t i = 0; i != entities.size(); ++i)
    {
        // access element as v[i]
        if (part2Found)
            break;
        for (std::size_t j = 0; j != entities.size(); ++j)
        {
            if (part2Found)
                break;
            for (std::size_t k = 0; k != entities.size(); ++k)
            {
                // access element as v[j]
                if (entities[i] + entities[j] + entities[k] == 2020)
                {
                    cout << entities[i] << " x " << entities[j] << " x " << entities[k] << " = " << entities[i] * entities[j] * entities[k] << endl;
                    part2Found = true;
                    break;
                }
            }
        }
    }

    // // Operation to sum the fuel requirements for each mass
    // auto ConvertToFuel = [](int acc, int mass) {
    //     return move(acc) + GetFuelRequirement(mass);
    // };

    // // Accumulate all fuel requirements
    // int totalFuelRequirement = accumulate(masses.begin(), masses.end(), 0, ConvertToFuel);

    // cout << "Day 1 Solution Part 1: Fuel Requirement: " << totalFuelRequirement << "\n\n";

    return 0;
}