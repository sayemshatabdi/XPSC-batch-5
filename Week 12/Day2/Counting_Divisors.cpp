#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int maxN=1e6+1;
    vector<int>v(maxN,0);
    for(int i=1;i<maxN;i++)
    {
        for(int j=i;j<maxN;j+=i)
        {
            v[j]++;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n]<<"\n";
    }
    return 0;
}