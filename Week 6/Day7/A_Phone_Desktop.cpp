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
        int a,b;
        cin>>a>>b;
        int h;
        if(b%2==0) h=b/2;
        else h=(b/2)+1;
        // cout<<h<<endl;
        if(b%2==0)
        {
            if(a<=(7*h))
            {
                cout<<h<<endl;
            }
            else
            {
                int x=a-(7*h);
                if(x%15==0) h+=(x/15);
                else h+=((x/15)+1);
                cout<<h<<endl;
            }
        }
        else
        {
            if(a<=((7*(h-1))+11))
            {
                cout<<h<<endl;
            }
            else
            {
                int x=a-((7*(h-1))+11);
                if(x%15==0) h+=(x/15);
                else h+=((x/15)+1);
                cout<<h<<endl;
            }
        }
    }
    return 0;
}