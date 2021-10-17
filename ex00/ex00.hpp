/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#pragma once

template<typename T>
T add(const T& a, const T& b) {
    return (a + b);
}

template<typename T>
T max(const T& a, const T& b) {
    return (a > b) ? (a) : (b);
}

template<typename T>
T min(const T& a, const T& b) {
    return (a < b) ? (a) : (b);
}

template<typename T>
void swap(T& a, T& b) {
    T c = a;
    a = b;
    b = c;
}