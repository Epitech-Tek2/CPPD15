/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <iostream>
#include "../ex02/ex02.hpp"

// #define cOut(message) std::cout << message << std::endl

// static void redirect_all_stdout(void)
// {
//     cr_redirect_stdout();
//     cr_redirect_stderr();
// }

// Test(test_ex2, test_ex0, .init=redirect_all_stdout)
// {
//     int tab [2] = {3 , 0};
//     int minimum = templateMin ( tab , 2) ;
//     std::cout << "templateMin(tab, 2) = " << minimum << std::endl;
//     minimum = nonTemplateMin ( tab , 2) ;
//     std::cout << "nonTemplateMin(tab, 2) = " << minimum << std::endl;

//     cr_assert_stdout_eq_str("template min\n"\
//                             "templateMin(tab, 2) = 0\n"\
//                             "non-template min\n"\
//                             "nonTemplateMin(tab, 2) = 0\n");
// }