#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n,k;
    cin>>n>>k;
    vector<long long>v;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());    
    if(v.size()<k)
    {
        cout<<-1;
    }
    else
    {
        cout<<v[k-1];
    }
    return 0;
}