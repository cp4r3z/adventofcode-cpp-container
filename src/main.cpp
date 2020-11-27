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

    ifstream fin("solution01_input.txt");
    while (getline(fin, line))
    {
        v.push_back(stoi(line));
    }

    int mass0 = 1;
    //int fuel0 = 2;
    //int fuel0 = SOLUTION_1_H_::GetFuelRequirement(mass0); // GetFuelRequirement(mass0);
    int fuel0 = GetFuelRequirement(mass0);

    cout << "Mass: " << mass0 << "\n\n";
    cout << "Fuel: " << fuel0 << "\n\n";

    return 0;
}