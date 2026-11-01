#include <unistd.h>

// just go from the most significant to least significant bit
void    print_bits(unsigned char octet)
{
    int i = 7;
    int bit;

    while (i > -1)
    {
        bit = octet & (1 << i);
        if (bit)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}
