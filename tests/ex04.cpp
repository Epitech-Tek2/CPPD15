/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <iostream>
#include "../ex04/ex04.hpp"

// static void redirect_all_stdout(void)
// {
//     cr_redirect_stdout();
//     cr_redirect_stderr();
// }

// Test(test_ex4, test_ex0, .init=redirect_all_stdout)
// {
//     std::cout << "1 == 0 ? " << equal(1, 0) << std::endl;
//     std::cout << "1 == 1 ? " << equal(1, 1) << std::endl;

//     Tester<int> iT;

//     std::cout << "41 == 42 ? " << iT.equal(41, 42) << std::endl;
//     std::cout << "42 == 42 ? " << iT.equal(42, 42) << std::endl;

//     cr_assert_stdout_eq_str("1 == 0 ? 0$ \n"\
//                             "1 == 1 ? 1\n"\
//                             "41 == 42 ? 0\n" \
//                             "42 == 42 ? 1\n");
// }