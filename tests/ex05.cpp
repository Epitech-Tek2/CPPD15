/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <iostream>
#include "../ex05/ex05.hpp"

// static void redirect_all_stdout(void)
// {
//     cr_redirect_stdout();
//     cr_redirect_stderr();
// }

// int float_to_int(float const& f) {
//     return static_cast<int>(f);
// }

// Test(test_ex5, test_ex0, .init=redirect_all_stdout)
// {
// array <int > a (4) ;
// a [3] = 1;
// const auto b = a ;
// b . dump () ;
// array <float > c ;
// c . dump () ;
// c [2] = 1.1;
// c . dump () ;
// a = c . convertTo <int >(& float_to_int ) ;
// a . dump () ;

//     cr_assert_stdout_eq_str("[0, 0, 0, 1]\n"\
//                             "[]\n"\
//                             "[0, 0, 1.1]\n"\
//                             "[0, 0, 1]\n");
// }