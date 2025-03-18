/*
** EPITECH PROJECT, 2024
** chocolatine
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

#include "my.h"

Test(chocolatine, test_help_flag)
{
    char const *argv[] = {"./chocolatine", "-h"};
    int argc = 2;
    int ret = chocolatine(argc, argv);

    cr_assert_eq(ret, 0);
}

Test(chocolatine, test_no_arg)
{
    char const *argv[] = {"./chocolatine"};
    int argc = 1;
    int ret = chocolatine(argc, argv);

    cr_assert_eq(ret, 0);
}

Test(chocolatine, test_invalid_arg)
{
    char const *argv[] = {"./chocolatine", "invalid"};
    int argc = 2;
    cr_redirect_stderr();
    int ret = chocolatine(argc, argv);

    cr_assert_stderr_eq_str("Invalid number of arguments\n");
    cr_assert_eq(ret, 84);
}
