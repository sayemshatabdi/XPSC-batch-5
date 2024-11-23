#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        vector<long long> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        long long l = 0, r = 0, sum = 0, ans = 0;
        while (r < n)
        {
            sum += a[r];
            if (((r + 1) < n) && (sum <= k) && ((h[r] % h[r + 1]) == 0))
            {
                ans = max(ans, (r - l) + 1);
                r++;
            }
            else
            {
                if (((r + 1) < n) && ((h[r] % h[r + 1]) != 0))
                {
                    if (sum <= k)
                    {
                        ans = max(ans, (r - l) + 1);
                    }
                    l = r + 1;
                    r = l;
                    sum = 0;
                }
                else
                {
                    if (sum <= k)
                    {
                        ans = max(ans, (r - l) + 1);
                    }
                    sum -= a[l];
                    l++;
                    r++;
                }
            }
        }
        if (h.size() == 1)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}