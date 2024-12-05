#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n>m)
        {
            cout<<"NO"<<endl;
        }
        else if(n==m)
        {
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++)
            {
                cout<<"1 ";
            }
            cout<<endl;
        }
        else
        {   
            vector<ll>e;
            if(n%2==0 && m%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<n-2;i++)
                {
                    e.push_back(1);
                }
                e.push_back((m-n+2)/2);
                e.push_back((m-n+2)/2);
            }
            else if(n%2==0 && m%2==1)
            {
                cout<<"NO"<<endl;
            }
            else if(n%2==1 && m%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<n-1;i++)
                {
                    e.push_back(1);
                }
                e.push_back((m-n+1));
            }
            else if(n%2==1 && m%2==1)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<n-1;i++)
                {
                    e.push_back(1);
                }
                e.push_back((m-n+1));
            }
            for(int v :e)
            {
                cout<<v<<" ";
            }
            cout<<endl;

        }
    }
    return 0;
}