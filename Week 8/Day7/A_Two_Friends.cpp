#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag=false;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[i+1]==v[i])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}