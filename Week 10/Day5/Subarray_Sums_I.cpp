#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0,ans=0;
    long long sum=0;
    while(r<n)
    {
        sum+=a[r];
        while(sum>x)
        {
            sum-=a[l];
            l++;
        }
        if(sum==x)
        {
            ans++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}