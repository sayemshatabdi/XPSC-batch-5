#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,x;
    cin>>n>>x;
    vector<long long>a(n);
    for(long long i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    map<long long,long long>mp;
    long long sum=0;
    long long count=0;
    mp[0]=1;
    for(long long i=0;i<n;i++) 
    {
        sum+=a[i];
        count+=mp[sum-x];
        mp[sum]++;
    }
    cout<<count<<endl;
    return 0;
}
