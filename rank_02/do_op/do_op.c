#include <stdlib.h>
#include <stdio.h>

// the did not expect us to handle division by zero so it was not handled
void handle_op(int a, int b, char op)
{
    int res;
    if (op == '+')
        res = a + b;
    else if (op == '-')
        res = a - b;
    else if (op == '*')
        res = a * b;
    else if (op == '/')
        res = a / b;
    else if (op == '%')
        res = a % b;
    else
        return;
    printf("%d", res);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        handle_op(a, b, av[2][0]);
    }
    printf("\n");
}
