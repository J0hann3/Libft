#include "libft.h"

char *strrchr(const char *s, int c)
{
    int i;

    i = strlen(s);
    while (i >= 0)
    {
        if (s[i] == c)
            return (s[i]);
        i--;
    }
    return (0);
}