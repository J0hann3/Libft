int memcmp(const void *s1, const void *s2, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}