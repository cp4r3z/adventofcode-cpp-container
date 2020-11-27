#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "solution01.h"

using namespace std;

int main()
{

    vector<int> v;
    string line;    

    ifstream infile("src/solution01_input.txt");
    while (getline(infile, line))
    {
        v.push_back(stoi(line));
    }
    infile.close();

    int mass0 = 1;
    //int fuel0 = 2;
    //int fuel0 = SOLUTION_1_H_::GetFuelRequirement(mass0); // GetFuelRequirement(mass0);
    int fuel0 = GetFuelRequirement(mass0);

    cout << "Mass: " << mass0 << "\n\n";
    cout << "Fuel: " << fuel0 << "\n\n";

    return 0;
}