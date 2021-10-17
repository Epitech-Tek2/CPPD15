/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD15-clement.muth
** File description:
** ex00
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <iostream>
#include "../ex01/ex01.hpp"

#define cOut(message) std::cout << message << std::endl

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(test_ex1, test_ex0, .init=redirect_all_stdout)
{
    class toto
    {
        private:
            toto &operator=(const toto&) {return *this;}
            toto(const toto &){}
        public:
            bool operator==(const toto&) const {return true;}
            bool operator>(const toto&) const {return false;}
            bool operator<(const toto&) const {return false;}
            toto(){}
    };
    toto a, b;
    std::cout << "toto a, b;" << std::endl;

    cOut("compare(a, b) return " << compare(a, b));
    cOut("compare(1, 2) return " << compare(1, 2));
    cOut("compare<const char*>(\"chaineZ\", \"chaineA42\") return " << compare<const char*>("chaineZ", "chaineA42"));
    const char *s1 = "42", *s2 = "lulz";
    cOut("const char *s1 = \"42\", *s2 = \"lulz\";");
    cOut("compare(s1, s2) return " << compare(s1, s2));
    cr_assert_stdout_eq_str("toto a, b;\n"\
                            "compare(a, b) return 0\n"\
                            "compare(1, 2) return -1\n"\
                            "compare<const char*>(\"chaineZ\", \"chaineA42\") return 1\n"\
                            "const char *s1 = \"42\", *s2 = \"lulz\";\n"\
                            "compare(s1, s2) return -1\n");
}