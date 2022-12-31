#include <stdio.h>
#include <stdlib.h>

void print_three(int height);
void print_trunk(int height);
void print_spaces(int spaces);
void print_n_stars(int number);
void check_height(int height);
void check_arguments(int argc, char **argv, int *height);

int main(int argc, char **argv)
{
    int height;

    check_arguments(argc, argv, &height);

    check_height(height);

    print_three(height);

    print_trunk(height - 1);

    return 0;
}

void check_arguments(int argc, char **argv, int *height)
{
    if (argc <= 1)
    {
        printf("Three height: ");
        scanf("%d", height);
    }
    else if (argc > 2)
    {
        printf("Too many arguments\n");
        exit(1);
    }
    else 
    {
        *height = atoi(argv[1]);
    }
}

void check_height(int height)
{
    if (height < 1)
    {
        exit(1);
    }
}

void print_n_stars(int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("*");
    }
    printf("\n");
}

void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}

void print_trunk(int spaces)
{
    for (int i = 0; i < 3; i++)
    {
        print_spaces(spaces);
        printf("*\n");
    }
}

void print_three(int height)
{
    for (int i = 1; i <= height; i++)
    {
        int total = (2 * i) - 1;
        print_spaces(height - i);
        print_n_stars(total);
    }
}
