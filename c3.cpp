#include<iostream>
using namespace std;
class Student{
	private :int id,marks[5];
	private :char name[45];
	
	public : void getdata(){
		cout<<"enter your name:";
		cin>>name;
		cout<<"enter your id:";
		cin>>id;
		
		for(int i=0;i<5;++i){
			
			cout<<"enter the marks:";
			cin>>marks[i];
			
		}
	}
	public:void percentage(){
		int m;
		for(int i=0;i<5;++i){
			 m=m+marks[i];
			
		}
		float p=(m*100)/(float)500;
		    cout<<"\nID:"<<id<<"\n";
			cout<<name<<" has scored "<<p<<" % ";
			if(p<30)
			cout<<"Fail";
			else if(p>30&&p<40)
			cout<<"\nGrade D";
			else if(p>41&&p<65)
			cout<<"\nGrade C";
			else if(p>=65&&p<80)
			cout<<"\nGrade B";
			else
			cout<<"\nGrade A";
		
	}
	
};

int main(){
	Student s;
	s.getdata();
	s.percentage();
	 
	return 0;
}
