#include <iostream>
#include <cstring>
#include <cstdint>
#include <array>
#include <limits>
#include "Menu.h"
#include "Global.h"
#include "Rotor.h"


namespace Config
{
    std::array<int, 3> rotors{0, 1, 2};
    std::array<int, 3> rotations{0, 0, 0};
}

class Enigma
{
    std::array<Rotor, 3> m_rotors{Global::DefRotors[0], Global::DefRotors[1], Global::DefRotors[2]};

    void rotateRotors()
    {
        m_rotors[0].rotate();
        if(m_rotors[0].getRotations() % 5 == 0)
            m_rotors[1].rotate();
        if(m_rotors[1].getRotations() % 5 == 0)
            m_rotors[2].rotate();

    }

    char reflect(char c)
    {
        return Global::g_stdalph[(94 / 2 + (94 / 2 - Global::g_stdMap[c])) - 1];
    }

public:
    Enigma() = default;
    Enigma(const std::array<int, 3>& rotors, const std::array<int, 3>& rotations)
    :m_rotors{Global::DefRotors[rotors[0]], Global::DefRotors[rotors[1]], Global::DefRotors[rotors[2]]}
    {
        m_rotors[0].rotate(rotations[0]);
        m_rotors[1].rotate(rotations[1]);
        m_rotors[2].rotate(rotations[2]);
    }

    char pass(char c)
    {
        c = m_rotors[0].passForward(c);
        c = m_rotors[1].passForward(c);
        c = m_rotors[2].passForward(c);
        c = reflect(c);
        c = m_rotors[2].passBackward(c);
        c = m_rotors[1].passBackward(c);
        c = m_rotors[0].passBackward(c);

        rotateRotors();
        return c;
    }
};

namespace Global
{
    Enigma enigma{Config::rotors, Config::rotations};
}

void reSeed()
{
    Global::enigma = Enigma(Config::rotors, Config::rotations);
}

void setting()
{
    std::cout << "Current Config :\nRotors : {" << Config::rotors[0] << ", " << Config::rotors[1] << ", " << Config::rotors[2] << "}"
    << "\nRotations : {" << Config::rotations[0] << ", " << Config::rotations[1] << ", " << Config::rotations[2] << "}\n";

    std::cout << "Enter new values : \n" << "Rotors (enter 3 values seperated with space (' ') 0 to 4 e.g: 0 4 3 ): \n";
    std::cin >> Config::rotors[0];
    std::cin >> Config::rotors[1];
    std::cin >> Config::rotors[2];
    std::cout << "Rotations (enter 3 values seperated with space (' ') e.g: 10 45 61 ): \n";
    std::cin >> Config::rotations[0];
    std::cin >> Config::rotations[1];
    std::cin >> Config::rotations[2];

    reSeed();
}

void encrypt()
{
    std::cout << "Enter Your Text : \n";
    std::string input;
    std::getline(std::cin, input);
    std::cout << "-----------\n";
    for(const auto& c : input)
    {
        std::cout << Global::enigma.pass(c);
    }
    std::cout << "\n\n";
    reSeed();
}

int main()
{
    while(true)
    {
        std::cout << Menu::home;
        int com{};
        std::cin >> com;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (com == 1)
            setting();
        if(com == 2)
            break;
        if(com == 0)
            encrypt();
    }

    return 0;
}
