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
        string a,b;
        cin>>a;
        cin>>b;
        if(a==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                pos=i;
                break;
            }
        }
        
        if(pos!=-1)
        {
            bool ok=true;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    if(pos>i)
                    {
                        ok=false;
                        break;
                    }
                }
            }
            if(ok) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}