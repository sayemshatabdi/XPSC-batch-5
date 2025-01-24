#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long i=1,ans;
        while(true)
        {
            long long x=n/i;
            long long y=(x+1)/2;
            if(k<=y)
            {
                ans=((2*k)-1)*i;
                break;
            }
            else
            {
                k-=y;
            }
            i=i*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}