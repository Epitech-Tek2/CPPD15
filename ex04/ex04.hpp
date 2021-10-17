/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex04
*/

#pragma once

#include <iostream>

template<typename T>
bool equal(const T& a, const T& b);

template<class T>
class Tester
{
    public:
        bool equal(const T& a, const T& b);
};