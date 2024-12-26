#include<bits/stdc++.h>
using namespace std;
int LCM(int a, int b) 
{
   return (a / __gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin>>n;
    long long ans=-1;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0 && LCM(i,n/i)==n)
        {
            
            ans=i;
        }
    }
    cout<<ans<<" "<<n/ans<<endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define finish(x) return cout << x << endl, 0
// #define ll long long
// ll n;
// ll lcm(ll a, ll b)
// {
//     return a / __gcd(a, b) * b;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cin >> n;
//     ll ans;
//     for(ll i = 1 ; i * i <= n ; i++)
//     {
//         if(n % i == 0 && lcm(i, n / i) == n)
//         {
//             ans = i;
//         }
//     }
//     cout << ans << " " << n / ans << endl;
// }