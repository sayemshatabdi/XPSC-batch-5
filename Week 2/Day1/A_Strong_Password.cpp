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
        string s;
        cin>>s;
        int n=s.size();
        bool flag=false;
        string b;
        for(int i=0;i<n;i++)
        {
            cout<<s[i];
            if(s[i]==s[i+1])
            {
                if(!flag)
                {
                    flag=true;
                    if(s[i]!='z')
                    {
                        cout<<char(s[i]+1);
                    }
                    else
                    {
                        cout<<"a";
                    }
                }
            }
            else
            {
                if(i==n-1 && !flag)
                {
                    flag=true;
                    if(s[i]!='z')
                    {
                        cout<<char(s[i]+1);
                    }
                    else
                    {
                        cout<<"a";
                    }
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}