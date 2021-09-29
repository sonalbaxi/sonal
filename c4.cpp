#include <iostream>
using namespace std;
class Student{
int id,age;
string name;
public :
Student(int id)
{
this->id=id;
}
Student ()
{}
void display()
{
cout<<"id is"<<endl;
cout<<id<<endl;
cout<<"name is"<<endl;
cout<<name<<endl;
cout<<"age is"<<endl;
cout<<age<<endl;
}
void getData()
{
cout<<"enter age and name respectively:";	
cin>>age;
cin>>name;
}
};
int main() {
int num,j=101,i;
cout<<"Enter total students"<<endl;
cin>>num;
Student *s=new Student[num];
for(i=0;i<num;i++)
{
s[i]={j};
j++;
}
for(i=0;i<num;i++)
{
s[i].getData();
s[i].display ();
}
return 0;
}
