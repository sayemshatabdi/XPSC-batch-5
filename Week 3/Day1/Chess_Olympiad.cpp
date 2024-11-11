#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==4)
    {
        float ans1=a+(0.5*b);
        float ans2=c+(0.5*b);
        if(ans1>ans2)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else
    {
        float ans1=a+(0.5*b)+(4-(a+b+c));
        float ans2=c+(0.5*b);
        // cout<<ans1<<" "<<ans2;
        if(ans1>ans2)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}