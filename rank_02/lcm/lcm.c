unsigned gcd (unsigned int a, unsigned int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    return (a*b) / gcd(a, b);
}
