#include "Global.h"
#include "Rotor.h"
#include <algorithm>

Rotor::Rotor(const char *sample) {
    if(std::strlen(sample) == 94)
        std::strncpy(rotor, sample, 94);
    else
        throw std::invalid_argument("rotor must be exactly 94 characters long.");
}

void Rotor::rotate(int amount)
{
    rotations += amount;
    rotations %= 94;
}

char Rotor::passForward(char input)
{
    if(Global::g_stdMap.find(input) == Global::g_stdMap.end())
        throw std::invalid_argument("invalid character");
    return rotor[(Global::g_stdMap[input] + rotations) % 94];
}

char Rotor::passBackward(char output)
{
    auto it = std::find(std::begin(rotor), std::end(rotor), output);
    if(it == std::end(rotor))
        throw std::invalid_argument("Invalid character in reverse pass");

    // Calculate the original input character position (reverse rotation)
    int index = std::distance(std::begin(rotor), it);
    int originalIndex = (index - rotations + 94) % 94;
    return Global::g_stdalph[originalIndex];
}

