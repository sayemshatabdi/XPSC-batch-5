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
        string s;
        int cnt=0,b=0;
        if(n%2==0)
        {
            char a='A';
            while(true)
            {
                if(cnt==n) break;
                if(b==2) 
                {
                    a=a+1;
                    b=0;
                }
                s.push_back(a);
                b++;
                cnt++;
            }
        }
        if(n%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl<<s<<endl;
        }
    }
    return 0;
}