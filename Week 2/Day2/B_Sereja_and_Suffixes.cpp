#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    set<int>s;
    int a[n];
    for(int i=n-1;i>=0;i--)
    {
        s.insert(v[i]);
        a[i]=s.size();
    }
    while(t--)
    {
        int b;
        cin>>b;
        cout<<a[b-1]<<endl;
    }
    return 0;
}