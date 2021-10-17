/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <iostream>
#include "../ex00/ex00.hpp"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(swap, test_ex0, .init=redirect_all_stdout)
{
    int a = 2;
    int b = 3;
    :: swap (a , b ) ;
    std :: cout << "a = " << a << ", b = " << b << std :: endl ;
    std :: cout << "min(a, b) = " << :: min (a , b ) << std :: endl ;
    std :: cout << "max(a, b) = " << :: max (a , b ) << std :: endl ;
    std :: cout << "add(a, b) = " << :: add (a , b ) << std :: endl ;
    std :: string c = "chaine1";
    std :: string d = "chaine2";
    :: swap (c , d ) ;
    std :: cout << "c = " << c << ", d = " << d << std :: endl ;
    std :: cout << "min(c, d) = " << :: min (c , d ) << std :: endl ;
    std :: cout << "max(c, d) = " << :: max (c , d ) << std :: endl ;
    std :: cout << "add(c, d) = " << :: add (c , d ) << std :: endl ;

    cr_assert_stdout_eq_str("a = 3, b = 2\n"\
                            "min(a, b) = 2\n"\
                            "max(a, b) = 3\n"\
                            "add(a, b) = 5\n"\
                            "c = chaine2, d = chaine1\n"\
                            "min(c, d) = chaine1\n"\
                            "max(c, d) = chaine2\n"\
                            "add(c, d) = chaine2chaine1\n");
}