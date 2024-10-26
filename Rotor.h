//
// Created by Main on 10/25/2024.
//

#ifndef UNTITLED1_ROTOR_H
#define UNTITLED1_ROTOR_H

#include "cstring"
#include "cstdint"
#include <iostream>
#include "Global.h"

class Rotor
{
    char rotor[95]; // extra element is for null terminator
    int rotations{0};
public:
    explicit Rotor(const char* sample);


    void rotate(int amount = 1);

    char passForward(char input);
    char passBackward(char input);

    inline int getRotations() const {return rotations;}

};
#endif //UNTITLED1_ROTOR_H
