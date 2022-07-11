int romanToInt(string s)
{
    map<char, int> mpp;
    mpp['I'] = 1;
    mpp['V'] = 5;
    mpp['X'] = 10;
    mpp['L'] = 50;
    mpp['C'] = 100;
    mpp['D'] = 500;
    mpp['M'] = 1000;

    int strSize = s.length();

    int result = mpp[s[strSize - 1]];

    for (int i = strSize - 2; i >= 0; i--)
    {
        if (mpp[s[i]] < mpp[s[i + 1]])
            result -= mpp[s[i]];
        else
            result += mpp[s[i]];
    }

    return result;
}
