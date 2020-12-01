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
    vector<int> entries;
    string line;

    ifstream inputFile(INPUT_PATH);
    while (getline(inputFile, line))
    {
        entries.push_back(stoi(line));
    }
    inputFile.close();    

    return 0;
}