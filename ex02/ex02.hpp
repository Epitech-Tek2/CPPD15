/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex02
*/

#pragma once

#define cOut(message) std::cout << message << std::endl

#include <iostream>

template<typename T>
T min(T const& a, T const& b)
{
    cOut("template min");
    return (a <= b) ? (a) : (b);
}

int min(int const a, int const b)
{
    cOut("non-template min");
    return (a <= b) ? (a) : (b);
}

template<typename T>
T templateMin(T const *tab, int const size)
{
    T tmp = tab[0];

    for (int i = 1; i < size; i++) tmp = min<T>(tab[i], tmp);
    return (tmp);
}

int nonTemplateMin(int const *tab, int const size)
{
    int x = *tab;

    for (int i = 1; i < size; i++) x = min(tab[i], x);
    return (x);
}