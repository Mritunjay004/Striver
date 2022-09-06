#include <bits/stdc++.h>
using namespace std;

class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int thisK;
    KthLargest(int k, vector<int> &nums)
    {
        thisK = k;
        for (auto num : nums)
            add(num);
    }

    int add(int val)
    {
        if (pq.size() < thisK)
            pq.push(val);
        else
        {
            if (val > pq.top())
            {
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};

int main()
{
    pq.push(3);
    pq.push(10);
    pq.push(15);
    cout << pq.top();
}
