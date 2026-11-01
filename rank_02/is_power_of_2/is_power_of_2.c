int         is_power_of_2(unsigned int n)
{
    // a number is a power of 2 if it had only 1 set bit
    int bit_count = 0;
    while(n)
    {
        if (n % 2 == 1)
            bit_count++;
        n /= 2;
    }
    return bit_count == 1;
}