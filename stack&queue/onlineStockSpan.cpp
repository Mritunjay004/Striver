#include <bits/stdc++.h>
using namespace std;

class StockSpanner
{
    stack<pair<int, int>> stk;
    int index;

    StockSpanner()
    {
        index = -1;
    }

    int next(int price)
    {
        index += 1;
        while (!stk.empty() and stk.top().second <= price)
            stk.pop();

        if (stk.empty())
        {
            stk.push({index, price});
            return index + 1;
        }

        int result = stk.top().first;
        stk.push({index, price});
        return index - result;
    }
};

int main()
{
}
