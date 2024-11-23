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
        vector<char>v;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='0')
            {
                char c=s[i]+48;
                // cout<<c<<" ";
                v.push_back(c);
            }
            else
            {
                if(s[i-2]=='1')
                {
                    char c =s[i-1]+58;
                    // cout<<c<<" ";
                    v.push_back(c);
                }
                else
                {
                    char c=s[i-1]+68;
                    // cout<<c<<" ";
                    v.push_back(c);
                }
                i=i-2;
            }
        }
        reverse(v.begin(),v.end());
        for(char c : v)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}