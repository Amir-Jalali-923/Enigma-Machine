//
// Created by Main on 10/25/2024.
//

#ifndef UNTITLED1_GLOBAL_H
#define UNTITLED1_GLOBAL_H

#include <unordered_map>
#include <cassert>
#include "Rotor.h"
#include <array>

namespace Global
{
    inline constexpr std::string_view g_stdalph{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789~!@#$%^&*()_-+=,.<>/?;:'\"[{]}\\| "};
    inline std::unordered_map<char, int> g_stdMap = {
            {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7},
            {'I', 8}, {'J', 9}, {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14}, {'P', 15},
            {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19}, {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23},
            {'Y', 24}, {'Z', 25}, {'a', 26}, {'b', 27}, {'c', 28}, {'d', 29}, {'e', 30}, {'f', 31},
            {'g', 32}, {'h', 33}, {'i', 34}, {'j', 35}, {'k', 36}, {'l', 37}, {'m', 38}, {'n', 39},
            {'o', 40}, {'p', 41}, {'q', 42}, {'r', 43}, {'s', 44}, {'t', 45}, {'u', 46}, {'v', 47},
            {'w', 48}, {'x', 49}, {'y', 50}, {'z', 51}, {'0', 52}, {'1', 53}, {'2', 54}, {'3', 55},
            {'4', 56}, {'5', 57}, {'6', 58}, {'7', 59}, {'8', 60}, {'9', 61}, {'~', 62}, {'!', 63},
            {'@', 64}, {'#', 65}, {'$', 66}, {'%', 67}, {'^', 68}, {'&', 69}, {'*', 70}, {'(', 71},
            {')', 72}, {'_', 73}, {'-', 74}, {'+', 75}, {'=', 76}, {',', 77}, {'.', 78}, {'<', 79},
            {'>', 80}, {'/', 81}, {'?', 82}, {';', 83}, {':', 84}, {'\'', 85}, {'"', 86}, {'[', 87},
            {'{', 88}, {']', 89}, {'}', 90}, {'\\', 91}, {'|', 92}, {' ', 93}
    };

    inline std::array<Rotor, 5> DefRotors
    {{
        Rotor {"re&]J%9.mCz{s-p:laDLSU_dA0+5|xK$uVGn>PWk<T^f)?i(X=MRObH[vEQ8@q~ g,\\h\"#'3*Zc2Iy174FtNjo/B6!wY};"},
        Rotor {"s*;tx-o9b+/{MAw7c0fj6ymL\"Y1O=u<,I5}KV2vkr%#$EQ_.a'D4S~i)>XH^8 R!:lB[U3ngz?q|eNCh&WT\\P@d]ZFpJ(G"},
        Rotor {"I& #HtP>h4sVTyme_lo=NQaR-?}n3Dx)*U\"^|1C52:kWrF]X+JwEAbfj$!%B{M7Sg8<[@LvKZ'c,06.pO/izd\\qY;Gu~(9"},
        Rotor {"UE~GI30LOu6$\"C,HjznmAhY}r4>PDQ.J*%RNea|B]o'K7!@^)l_F ?[<WZf9=M2b-:(iXv/5V;\\yt+qSc#wsdg{18x&Tpk"},
        Rotor {".qZ6Q'r]-4k%SEMH5/DeoI$+g:z!dTF <LO=juv^7&\"[h8?#9RW;3wYnli|a1X}VA>,txcy(@~PBUJms0*\\bp{GN_2)CKf"}
    }};

}

#endif //UNTITLED1_GLOBAL_H
