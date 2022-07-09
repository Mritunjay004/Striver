string reverseWords(string s)
{
    string temp = "";
    string ans = "";
    int left = 0, right = s.length() - 1;

    while (left <= right)
    {
        char ch = s[left];

        if (ch != ' ')
            temp += ch;
        else
        {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
            temp = "";
        }
        left++;
    }

    if (temp != "")
    {
        if (ans != "")
            ans = temp + " " + ans;
        else
            ans = temp;
    }

    return ans;
}
