#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q,marks=0;
    map<string,int> mp;
    cin>>q;
    while(q--)
    {
        string x;
        int t,y;
        cin>>t;
        if(t==1)
        {
            cin>>x>>y;
            if(mp.find(x)==mp.end())
                mp.insert(make_pair(x,y));
            else {
                mp[x]+=y;
            }
        }
        else if(t==2)
        {
            cin>>x;
            if(mp.find(x)!=mp.end())
            {
                mp.erase(x);
            }
            else {
                continue;
            }
        }
        else {
            cin>>x;
            cout<<mp[x]<<endl;
        }
    }   
    return 0;
}