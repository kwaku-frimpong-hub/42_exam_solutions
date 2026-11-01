#include <unistd.h>



void solve(char *s1, char *s2)
{
    // in this case i think the efficient solution is not only short but easy to remember
    // it all boils down to the fact that there are 128 ascii chars
    // so if we create an array of 128 we can mark a char that is present in the string
    // this help us cross check if chars present in both strings and when we have already encountered a char
    int mp[128];
    int i = 0;
    while (i < 128) // this is to initialise our array
    {
        mp[i] = 0;
        i++;
    }
    
    i = 0;
    while (s2[i])
    {
        mp[(int)s2[i]] = 1;
        i++;
    }

    i = 0;
    while (s1[i])
    {
        if (mp[(int)s1[i]] == 1)
        {
            mp[(int)s1[i]] = 0; // so we dont write this char again
            write(1, s1 + i, 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        solve(av[1], av[2]);
    write(1, "\n", 1);
}
