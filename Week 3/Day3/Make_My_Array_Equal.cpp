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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x!=0)
            {
                mp[x]++;
            }
        }
        if(mp.size()==1 || mp.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}