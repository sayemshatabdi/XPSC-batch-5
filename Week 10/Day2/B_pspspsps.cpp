#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ss, pp;
    ss = pp = 0;
    ll si = 0;
    ll pi = -1;
    ll idx = 0;
    for (auto &&i : s)
    {
        if (i == 's')
        {
            ss++;
            si = idx;
        }
        if (i == 'p')
        {
            pp++;
            if (pi == -1)
            {
                pi = idx;
            }
        }
        idx++;
    }
    if (ss == 0 || pp == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (si == 0 || pi == n - 1)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}