#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,t;
    cin>>s;
    cin>>t;
    int s1=0,s2=0,uns=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            s1++;
        }
        else if(s[i]=='-')
        {
            s1--;
        }
    }
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='+')
        {
            s2++;
        }
        else if(t[i]=='-')
        {
            s2--;
        }
        else if(t[i]=='?')
        {
            uns++;
        }
    }
    int solves=0,totaloutcome=(1<<uns);
    if(uns==0)
    {
        if(s1==s2)
        {
            cout<<"1.000000000000";
        }
        else
        {
            cout<<"0.000000000000";
        }
    }
    else
    {
        for(int mask=0;mask<(1<<uns);mask++)
        {
            int tmp=s2;
            for(int k=0;k<uns;k++)
            {
                if((mask>>k)&1)
                {
                    tmp++;
                }
                else
                {
                    tmp--;    
                }
            }
            if(tmp==s1)
            {
                solves++;
            }
        }
        double ans=(1.0*solves/totaloutcome);
        cout<<fixed<<setprecision(12)<<ans<<endl;
    }
    return 0;
} 