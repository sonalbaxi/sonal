#include <iostream>
using namespace std;
class Person{
int age;
string name;
public:
void getData()
{
cout<<"\nEnter name and age"<<endl;
cin>>name>>age;
}
void display()
{
cout<<"\nName is "<<name<<endl;
cout<<"\nAge is "<<age<<endl;
}
};
class Student : public Person{
public:
Student(int n)
{
num=n;
}
int id,perc,num,i,sum=0;
int * m=new int[num];

public :
int percentage()
{
for(i=0;i<num;i++)
{
sum+=m[i];
}
perc=sum/num;
return perc;
}
void getData()
{
Person :: getData();
cout<<"\nEnter id"<<endl;
cin>>id;
cout<<"\nEnter subjects and their marks"<<endl;
for(i=0;i<num;i++)
cin>>s[i]>>m[i];
}
void display()
{
Person :: display();
cout<<"\nId is "<<id<<endl;
cout<<"\nSubject and marks is "<<endl;
for(i=0;i<num;i++)
{
cout<<s[i]<<" "<<m[i]<<endl;
}
cout<<"\nPercentage is "<<perc<<endl;
}
};
int main() {
int n;
cout<<"\nEnter total subjects"<<endl;
cin>>n;
Student s(n);
s.getData();
s.display();
return 0;
}
