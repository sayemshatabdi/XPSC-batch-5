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
        cin>>s;
        string real=s;
        reverse(s.begin(),s.end());
        if(real<=s)
        {
            if(n%2==0)
            {
                cout<<real<<endl;
            }
            else
            {
                cout<<real<<s<<endl;
            }
        
        }
        else
        {
            if(n%2==1)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<s<<real<<endl;
            }
        }

    }
    return 0;
}