#include <string>
#include <vector>
#include <iostream> // cout
#include <fstream>  // ifstream
#include <numeric>  // accumulate

#include "solution01.h"

using namespace std;

string INPUT_PATH = "src/solution01_input.txt";

int main()
{
    // Read the input file into a vector
    vector<int> masses;
    string line;

    ifstream inputFile(INPUT_PATH);
    while (getline(inputFile, line))
    {
        masses.push_back(stoi(line));
    }
    inputFile.close();

    // Operation to sum the fuel requirements for each mass
    auto ConvertToFuel = [](int acc, int mass) {
        return move(acc) + GetFuelRequirement(mass);
    };

    // Accumulate all fuel requirements
    int totalFuelRequirement = accumulate(masses.begin(), masses.end(), 0, ConvertToFuel);

    cout << "Day 1 Solution Part 1: Fuel Requirement: " << totalFuelRequirement << "\n\n";

    return 0;
}