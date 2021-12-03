#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    set<int> s;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            if(s.find(x)!=s.end())
            {
                s.erase(x);
            }
            else
                continue;
        }
        else
        {
            if(s.find(x)!=s.end())
            {
                cout<<"Yes"<<endl;
            }    
            else 
            {
                cout<<"No"<<endl;
            }
        }
    } 
    return 0;
}



