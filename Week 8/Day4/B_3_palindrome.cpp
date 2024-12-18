#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x=0;
    cin>>n;
    string s="bbaa";
    for(int i=0;i<n;i++)
    {
        cout<<s[x];
        x++;
        if(x==4) x=0;
    }
    return 0;
}