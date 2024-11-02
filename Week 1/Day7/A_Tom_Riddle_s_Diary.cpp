#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    map<string,bool>mp;
    while(n--)
    {
        string s;
        cin>>s;
        if(mp[s]==false)
        {
            cout<<"NO"<<endl;
            mp[s]=true;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}