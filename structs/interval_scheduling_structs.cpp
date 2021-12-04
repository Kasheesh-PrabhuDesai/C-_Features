#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshop
{
    int start_time,duration,end_time;
    
    bool operator<(const Workshop &rhs){
    return (this->end_time < rhs.end_time);
    }
};

struct Available_Workshops
{
  int n;
  vector<Workshop> vec;
}; 
  
Available_Workshops* initialize(int start_time[],int duration[],int num)
{
    Available_Workshops *av = new Available_Workshops;
    av->n = num;
    for(int i=0;i<num;i++)
    {
        Workshop w;
        w.start_time = start_time[i];
        w.duration = duration[i];
        w.end_time = start_time[i]+duration[i];
        av->vec.push_back(w);
    }
    sort(av->vec.begin(),av->vec.end());
    return av;
    
}
  
int CalculateMaxWorkshops(Available_Workshops* test)
{
    int w_count = 1;
    int test_end_time = test->vec.at(0).end_time;
    for(int i{1}; i < test->n; i++){
        if(test_end_time <= test->vec.at(i).start_time){
            w_count++;
            test_end_time = test->vec.at(i).end_time;
        }
    }
    return w_count;
}
    




int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}