#include <unistd.h>

void solve(char *s1, char *s2)
{
    // we only have 128 ascii chars so we can you that to build and empty array 128 long
    // the index representing a char, and if we see that char we mark it out
    int seen[128];
    for (int i = 0; i < 128; i++)
        seen[i] = 0;

    int i = 0;
    while (s1[i])
    {
        if (seen[(int)s1[i]] == 0)
            write(1, s1 + i, 1);
        seen[(int)s1[i]] = 1;
        i++;
    }

    i = 0;
    while (s2[i])
    {
        if (seen[(int)s2[i]] == 0)
            write(1, s2 + i, 1);
        seen[(int)s2[i]] = 1;
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        solve(av[1], av[2]);
    write(1, "\n", 1);
}