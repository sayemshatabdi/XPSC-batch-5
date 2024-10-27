#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin>>a>>b>>c;
    int ans;
    bool flag=false;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            ans=i;
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}