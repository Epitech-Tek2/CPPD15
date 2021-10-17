/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex06
*/

#pragma once

#include <iostream>
#include <sstream>

#define printContent(print) ({ \
    std::stringstream stream; \
    stream << a; \
    return (std::string(print) + stream.str()); \
})

#define printFloat(print) ({ \
    std::stringstream stream; \
    stream << a; \
    return (std::string(print) + stream.str() + "f"); \
})

template<typename T>
std::string print(const T)
{
    return (std::string("???"));
}

template<>
std::string print(const int a)
{
    printContent("int:");
}

template<>
std::string print(const float a)
{
    printFloat("float:");
}

template<>
std::string print(const std::string a)
{
    return (std::string("string:\"") + a + "\"");
}

template<typename T1, typename T2 = T1>
class Tuple
{
    public:
        T1 a;
        T2 b;

        std::string toString() const noexcept
        {
            return (std::string("[TUPLE [") + print(a) + "] [" + print(b) + "]]");
        }
};