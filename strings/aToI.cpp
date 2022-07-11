int myAtoi(string s)
{
    if (s.empty())
        return 0;

    int i = 0, n = s.length(), sign = 1;

    while (s[i] == ' ' and i < n)
        i++;

    if (i == n)
        return 0;

    if (s[i] == '-')
    {
        sign = 0;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    long int out = 0;

    while (s[i] >= '0' and s[i] <= '9')
    {
        out *= 10;
        if (out <= INT_MIN or out >= INT_MAX)
            break;
        out += (s[i] - '0');
        i++;
    }

    if (sign == 0)
        out *= -1;

    if (out <= INT_MIN)
        return INT_MIN;
    if (out >= INT_MAX)
        return INT_MAX;

    return (int)out;
}
