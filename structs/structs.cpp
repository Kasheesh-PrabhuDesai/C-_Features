#include <iostream>

using namespace std;

struct Student
{
  string first_name="";
  string last_name="";
  int age=0,standard=0;
};

int main()
{
  Student s1{"kasheesh","prabhudesai",26,10};
  cout<<s1.first_name+" "+s1.last_name<<" "<<s1.age<<" "<<s1.standard<<endl;
  
  return 0;
}
