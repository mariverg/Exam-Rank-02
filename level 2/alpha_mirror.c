#include <unistd.h>

int mian(int agrc, char *argv[])
{
    if (argc == 2)
    {
        int i;

        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 90)
                argv[1][i] = 90 - argv[1][i] + 65;
            else if (agrv[1][i] >= 97 && argv[1][i] <= 122)
                argv[1][i] = 122 - argv[1][i] + 97:
            write (1, &argv[1][i], 1);
                i++;
        }
    }
    write (1, "\n", 1)
}