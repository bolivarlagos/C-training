#include <stdio.h>
#include <stdlib.h>
#define CONTROLLER 1

void print_piramid(int number, int control);
void print_piramid_reverse(int number);
void print_asterisk(int number);

int main(void)
{
    print_piramid(10, CONTROLLER);
    printf("\n");
    print_piramid_reverse(5);
    return 0;
}

void print_asterisk(int number)
{
    if (number == 0)
    {
        return;
    }
    printf("*");
    print_asterisk(number - 1);
}


void print_piramid(int number, int control)
{
    if (number == 0)
    {
        return;
    }
    print_asterisk(control);
    printf("\n");
    print_piramid(number - 1, control + 1);
}

void print_piramid_reverse(int number)
{
    if (number == 0)
    {
        return;
    }
    print_asterisk(number);
    printf("\n");
    print_piramid_reverse(number - 1);
}
