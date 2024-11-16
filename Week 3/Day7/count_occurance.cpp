#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string pat,txt;
    cin>>pat;
    cin>>txt;
	    map<char,int>mp1,mp2;
	    for(int i=0;i<txt.size();i++)
	    {
	        mp1[txt[i]]++;
	    }
	    int n=pat.size(),l=0,r=0,ans=0;
	    // for(auto [x,y]:mp1)
        // {
        //     cout<<x<<" ";
        // }
        while(r<n)
        {
            mp2[pat[r]]++;
            if(r-l+1==txt.size())
            {
                // for(auto [x,y]:mp2)
                // {
                //     cout<<x<<" "<<y;
                // }
                // cout<<endl;
                if(mp1==mp2)
                {
                    ans++;
                }
                // mp2.
                if(mp2[pat[l]]>1)
                {
                    mp2[pat[l]]--;
                }
                else
                {
                    mp2.erase(pat[l]);
                }
                // mp2.erase(pat[l]);
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        cout<<ans<<endl;
    return 0;
}