#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> cnt;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        cnt[s[i]]++;
    }
    int oddCnt = 0;
    for (auto [x, y] : cnt)
    {
        if (y % 2 != 0)
            oddCnt++;
    }
    if (oddCnt > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string first, middle, last;
        for (auto [x, y] : cnt)
        {
            if (y % 2 != 0)
            {
                for (int i = 0; i < y; i++)
                {
                    middle.push_back(x);
                }
            }
            else
            {
                for (int i = 0; i < y / 2; i++)
                {
                    first.push_back(x);
                    last.push_back(x);
                }
            }
        }
        reverse(last.begin(), last.end());
        string ans = first + middle + last;
        cout << ans << endl;
    }
 
    return 0;
