#include "solution01.h"
#include <math.h> /* floor */

int GetFuelRequirement(int mass)
{
    int requirement = floor(mass / 3) - 2;
    return requirement;
}