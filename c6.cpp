#include<iostream>
using namespace std;

class Result
{
	private:int total;
	public:	Result(){
			total=0;
		}
		float percent(int arr[],int size){
			for(int i=0;i<size;i++){
				total=total+arr[i];
			}
			total=(float)total/size;
			return(total);
		}
		static void display(float p,int s){
			cout<<"\nID: "<<s;
			cout<<"\nPERCENTAGE: "<<p;
		}
};

class Student{
	private:
		int id;
		int subject_number;
		int mark[15];
		int percentage;
	public:Student(){
			id=subject_number=0;
		}
		void inputId()	{
			cout<<"\nENTER ID: ";
			cin>>id;
		}
		void inputSubjectNo(){
			cout<<"\nENTER HOW MANY SUBJECT YOU HAVE: ";
			cin>>subject_number;
		}
		void inputMarks(){
			cout<<"\nENTER MARK: \n";
			for(int i=0;i<subject_number;i++){
				cin>>mark[i];
			}
		}
		void findPercentage(){
			Result r1;
			percentage=r1.percent(mark,subject_number);
			
		}
		void display(){
			Result::display(percentage,id);
		}

		
};

int main(){
	Student stu1,stu2;
	stu1.inputId();
	stu1.inputSubjectNo();
	stu1.inputMarks();
	stu1.findPercentage();
	stu1.display();
	stu2.inputId();
	stu2.inputSubjectNo();
	stu2.inputMarks();
	stu2.findPercentage();
	stu2.display();
}


