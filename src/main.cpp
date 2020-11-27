#include <string>
#include <vector>
#include <iostream> // cout
#include <fstream> // ifstream
#include <numeric> // accumulate

#include "solution01.h"

using namespace std;

int main()
{
    vector<int> masses;
    string line;

    ifstream inputFile("src/solution01_input.txt");
    while (getline(inputFile, line))
    {
        masses.push_back(stoi(line));
    }
    inputFile.close();

    auto ConvertToFuel = [](int a, int b) {
        return move(a) + GetFuelRequirement(b);
    };

    int totalFuelRequirement = accumulate(masses.begin(), masses.end(), 0, ConvertToFuel);

    cout << "Day 1 Solution Part 1: Fuel Requirement: " << totalFuelRequirement << "\n\n";

    return 0;
}