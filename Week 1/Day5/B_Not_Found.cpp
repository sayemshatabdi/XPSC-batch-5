#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    bool check[26]={false};
    for(int i=0;i<s.size();i++)
    {
        check[s[i]-'a']=true;
    }
    char ans;
    bool flag=false;
    for(int i=0;i<26;i++)
    {
        if(!check[i])
        {
            ans='a'+i;
            flag=true;
            break;
        }
    }
    if(flag) cout<<ans<<endl;
    else cout<<"None"<<endl;
    return 0;
}