unsigned char   swap_bits(unsigned char octet)
{
    unsigned char first_half = octet >> 4;
    unsigned char second_half = octet << 4;
    return second_half ^ first_half;
}
