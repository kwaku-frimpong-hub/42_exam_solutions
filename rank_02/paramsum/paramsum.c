#include <unistd.h>

// kinda straight forward we just need a func
// that prints a number so ft_putnbr

void print_nbr(int nbr)
{
    if (nbr <= 0)
        return;
    int last_digit = nbr % 10;
    char ch;

    print_nbr(nbr / 10);
    ch = '0' + last_digit;
    write(1, &ch, 1);
}

int main(int ac, char **av)
{
    (void) av; //since we never used av in our code
    if (ac > 1)
        print_nbr(ac-1);
    else if (ac == 1)
        write(1, "0", 1);
    write(1, "\n", 1);
}