#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp=0;
        cin>>temp;
        a.push_back(temp);
    } 
    int pos,start,end;
    cin>>pos>>start>>end;
    
    a.erase(a.begin()+pos-1); //since vector is 1 based make it 0 based index by subtracting 1.
    a.erase(a.begin()+start-1,a.begin()+end-1);
    
    cout<<a.size()<<endl;
    
    for(int i:a)
        cout<<i<<" ";
    
    cout<<endl;
    
    return 0;
}
