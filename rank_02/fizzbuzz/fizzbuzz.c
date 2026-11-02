#include <unistd.h>

int main(void)
{
    int i = 1;
    while (i < 101)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else{
            int first_digit = i / 10;
            int last_digit = i % 10;
            char ch;
            if (first_digit)
            {
                ch = '0' + first_digit;
                write(1, &ch, 1);
            }
            ch = '0' + last_digit;
            write(1, &ch, 1);
            write(1, "\n", 1);
        }

        i++;
    }
}
