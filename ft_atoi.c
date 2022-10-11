int atoi(const char *str)
{
    int res;
    int i;
    int sign;

    res = 0;
    i = 0;
    sign = 1;
    while (str[i] == " " || str[i] == "\f" || str[i] == "\r" || str[i] == "\n"
        ||str[i] == "\t" || str[i] == "\v")
        i++;
    if (str[i] == "-" || str[i] == "+")
    {
        if (str[i] == "-")
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    if (sign != 1)
        return (res*sign);
    return (res); 
}