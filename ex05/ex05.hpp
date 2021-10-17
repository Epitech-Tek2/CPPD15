/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex05
*/

#pragma once

#include <iostream>
#include <exception>

#define cOut(message) std::cout << message << std::endl

template<typename T>
class array
{
    public:
        array() noexcept : _size{0}, _tab{nullptr} {}
        array(unsigned int size) noexcept : _size{size}, _tab{new T[_size]} {}
        array(const array<T>& source) noexcept
        {
            _size = source._size;
            _tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++) _tab[i] = source._tab[i];
        }
        virtual ~array() noexcept
        {
            if (_tab) delete[] _tab;
        }
        unsigned int size() const noexcept
        {
            return (_size);
        }
        void dump() const noexcept
        {
            std::cout << "[";
            for (unsigned int i = 0; i < _size; i++) {
                std::cout << _tab[i];
                if (_size != i + 1) std::cout << ", ";
            }
            cOut("]");
        }
        template<typename U>
        array<U> convertTo(U(*convert)(const T& converted)) const noexcept
        {
            array<U> duplicate(_size);

            for (unsigned int i = 0; i < _size; i++) duplicate[i] = (*convert)(_tab[i]);
            return (duplicate);
        }
        array<T>& operator=(const array<T>& source) noexcept
        {
            if (_tab) delete[] _tab;
            _size = source._size;
            _tab = new T[_size];
            for (unsigned int i = 0; i < _size; i++) _tab[i] = source._tab[i];
            return (*this);
        }
        T& operator[](unsigned int idx)
        {
            T *copy = nullptr;

            if (idx < _size) return _tab[idx];
            copy = new T[idx + 1];
            for (unsigned int i = 0; i < _size; i++) copy[i] = _tab[i];
            delete[] _tab;
            _tab = copy;
            _size = idx + 1;
            return (_tab[idx]);
        }
        T& operator[](unsigned int idx) const
        {
            if (idx >= _size) {
                throw std::exception();
            }
            return (_tab[idx]);
        }

    private:
        unsigned int _size;
        T* _tab;
};

template<>
void array<bool>::dump() const noexcept
{
    std::cout << "[";
    for (unsigned int i = 0; i < _size; i++) {
        std::cout << (_tab[i] ? "true" : "false");
        if (i + 1 != _size) std::cout << ", ";
    }
    cOut("]");
}