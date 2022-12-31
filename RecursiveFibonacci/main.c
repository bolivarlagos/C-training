#include <stdio.h>

int fibonacci_recursive(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }
    return fibonacci_recursive(number - 1) + fibonacci_recursive(number - 2);
}

int fibonacci(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }

    int result = 0;
    int previous = 1;
    int previous_previous = 0;

    for (int i = 2; i <= number; i++)
    {
        result = previous + previous_previous;
        previous_previous = previous;
        previous = result;
    }
    return result;

}

int main(void)
{

    printf("This is fibonacci %d\n", fibonacci(10));
    printf("This is fibonacci_recursive %d\n", fibonacci_recursive(10));

    return 0;
}
