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
        vector<int>v;
        string s;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(i==0)
            {
                v.push_back(x);
                s.push_back('1');
            }
            else
            {
                int a=v.size();
                if(x>=v[a-1])
                {
                    if(flag)
                    {
                        v.push_back(x);
                        s.push_back('1');
                    }
                    else
                    {
                        if(x<=v[0])
                        {
                            v.push_back(x);
                            s.push_back('1');
                        }
                        else
                        {
                            s.push_back('0');
                        }
                    }
                }
                else
                {
                    if(x<=v[0])
                    {
                        if(flag)
                        {
                            v.push_back(x);
                            s.push_back('1');
                            flag=false;
                        }
                        else
                        {
                            s.push_back('0');
                        }
                    }
                    else
                    {
                        s.push_back('0');
                    }
                }
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}



// for(int i=0;i<n;i++)
        // {
        //     cin>>v[i];
        // }
        // bool flag=false;
        // int pivit=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(i==0)
        //     {
        //         s.push_back('1');
        //     }
        //     else
        //     {
        //         if(v[i]>=v[i-1])
        //         {
        //             if(!flag)
        //             {
        //                 s.push_back('1');
        //             }
        //             else
        //             {
        //                 if(v[i]<=v[0])
        //                 {
        //                     s.push_back('1');
        //                 }
        //                 else
        //                 {
        //                     s.push_back('0');
        //                 }
        //             }
        //         }
        //         else
        //         {
        //             if(v[i]<=v[0])
        //             {
        //                 if(!flag)
        //                 {
        //                     s.push_back('1');
        //                     flag=true;
        //                     pivit=v[i];
        //                 }
        //                 else
        //                 {
        //                     if(v[i]<v[0] && v[i]>=v[i-1])
        //                     {
        //                         s.push_back('1');
        //                     }
        //                     else
        //                     {
        //                         s.push_back('0');
        //                     }
        //                 }

        //             }
        //             else
        //             {
        //                 s.push_back('0');
        //             }
        //         }
        //     }
        // }
        // cout<<s<<endl;