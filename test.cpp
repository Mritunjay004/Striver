#include <bits/stdc++.h>
// #include <boost/functional/hash.hpp> // this library provides hashing for unordered <pair<int,int>>
#define fo(n, k) for (long int i = k; i < n; i++)
#define vi vector<int>
#define vl vector<long int>
#define vll vector<long long int>
#define LL long long int
#define LI long int
#define II int
#define sc(vc) for (auto i : vc)
#define lmt 200000
#define md 1000000007
#define pb push_back
using namespace std;
// long int power(long int x, long  int y, long int p)
// {
//     long int res = 1;

//     x = x % p;

//     if (x == 0) return 0;

//     while (y > 0)
//     {

//         if (y & 1)
//             res = (res*x) % p;
//         y = y>>1;
//         x = (x*x) % p;
//     }
//     return res;
// }
// struct comp{
// bool operator()(pair<int,int>p1,pair<int,int>p2){
// if(p2.second>p1.second)return true;
// }
// };
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LI T;
    cin >> T;
    while (T--)
    {
        LL N, x, y, k, l, r, m, i;
        cin >> N >> k;
        string s, res = "";
        cin >> s;
        if (k == 1)
        {
            cout << s;
        }
        else if (k == 2)
        {
            reverse(s.begin(), s.end() + 2);
            cout << s;
        }
        else
        {
            m = k / 2;
            cout << s[m];
            i = 1;
            while (i < N)
            {
                if (i < k)
                {
                    if (k % 2)
                    {
                        if (i % 2)
                        {
                            cout << s[m + i];
                            m = m + i;
                        }
                        else
                        {
                            cout << s[m - i];
                            m = m - i;
                        }
                    }
                    else
                    {
                        if (i % 2)
                        {
                            cout << s[m - i];
                            m = m - i;
                        }
                        else
                        {
                            cout << s[m + i];
                            m = m + i;
                        }
                    }
                }
                else
                {
                    cout << s[i];
                }
                i++;
            }
        }

        cout << "\n";
    }

    return 0;
}
