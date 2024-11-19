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
        int r=0,cnt_1=0,cnt_0=0;
        while(r<n)
        {
            if(s[r]=='0')
            {
                cnt_0++;
                while(s[r]!='1' && r<n)
                {

                    r++;
                }
            }
            else
            {
                cnt_1++;
                while(s[r]!='0' && r<n)
                {
                    r++;
                }
            }
        }
        if(cnt_1<=cnt_0)
        {
            cout<<cnt_1<<endl;
        }
        else if(cnt_0<=cnt_1)
        {
            cout<<cnt_0<<endl;
        }
    }
    return 0;
}