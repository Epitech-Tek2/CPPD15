/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <iostream>
#include "../ex03/ex03.hpp"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(test_ex3, test_ex0, .init=redirect_all_stdout)
{
   int tab [] = { 11 , 3 , 89 , 42 };
    foreach ( tab , print <int > , 4) ;
    std :: string tab2 [] = { "j'", "aime", "les", "templates", "!" };
    foreach ( tab2 , print , 5) ;

    cr_assert_stdout_eq_str("11\n"\
                            "3\n" \
                            "89\n" \
                            "42\n" \
                            "j'\n" \
                            "aime\n" \
                            "les\n" \
                            "templates\n" \
                            "!\n");
}