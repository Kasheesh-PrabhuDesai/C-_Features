#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    vector<int> iv,qv;
    vector<int>::iterator low,up;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        iv.push_back(temp);
    } 
    
    cin>>q;
    
    while(q--)
    {
        int t=0;
        cin>>t;
        
        low = lower_bound(iv.begin(),iv.end(),t);
        up = upper_bound(iv.begin(),iv.end(),t);
        
        if(low==up)
        {
            cout<<"No "<<up-iv.begin()+1<<endl;
        }
        else {
            cout<<"Yes "<<low-iv.begin()+1<<endl;
        }
        

    }
    
    
     
    return 0;
}
