/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex01
*/

#pragma once

#include <cstring>

template<typename T>
int compare(const T& a, const T& b)
{
    return (a > b) ? (1) : (a == b) ? (0) : (-1);
}

template<>
int compare<const char *>(const char *const& a, const char *const& b)
{
    int res = strcmp(a, b);

    return (res < 0) ? (-1) : (res > 0) ? (1) : (0);
}