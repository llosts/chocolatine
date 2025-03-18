/*
** EPITECH PROJECT, 2024
** chocolatine
** File description:
** display_help.c
*/

#include <stdio.h>
#include <string.h>

#include "my.h"

static void display_help(char const *binary_name)
{
    printf("USAGE\n");
    printf("\t%s\n\n", binary_name);
    printf("DESCRIPTION\n");
    printf("\tThis is a chocolatine\n");
}

int chocolatine(int argc, char const *argv[])
{
    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        display_help(argv[0]);
        return SUCCESS;
    }
    if (argc != 1) {
        fprintf(stderr, "Invalid number of arguments\n");
        return FAILURE;
    }
    printf("Hello World\n");
    return SUCCESS;
}
