/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex03
*/

#pragma once

#include <iostream>

#define cOut(message) std::cout << message << std::endl

template<typename T>
void foreach(T const *tab, void (func)(T const& function), int const size)
{
    for (int i = 0; i < size; i++) (*func)(tab[i]);
}

template<typename T>
void print(T const& a)
{
    cOut(a);
}