#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,mx=INT_MIN;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    int gcd=0;
    long long sum=0;
    for(int x:v)
    {
        gcd=__gcd(gcd,mx-x);
        sum+=(mx-x);   
    }
    long long ans;
    if (gcd == 0) 
    {
        ans = 0; 
    } 
    else 
    {
        ans = sum / gcd;
    }
    cout<<ans<<" "<<gcd<<endl;
    return 0;
}

