#include<iostream>
using namespace std;
class Person{
	private:
		int age;
		char name[20];
	public:
		void inputName(){
			cout<<"\nEnter Person Name: ";
			cin>>name;
		}
		void inputAge(){
			cout<<"\nEnter Age of Person: ";
			cin>>age;
		}
		void display(){
			cout<<"\nName: "<<name<<"\nAge: "<<age;
		}
};

class Student:public Person{
	private:
		int id;
		int subject_number;
		int mark[15];
	public:
	Student(){
		id=subject_number=0;		
	}	
	void inputName(){
		cout<<"\nFor Student: ";
		Person::inputName();
	}
	void inputAge(){
		cout<<"\nFor Student: ";
		Person::inputAge();
	}
	void inputId(){
		cout<<"\nEnter ID of Student: ";
		cin>>id;
	}
	void inputSubject(){
		cout<<"\nHow Many Subject/Subjects You Have: ";
		cin>>subject_number;
	}
	void inputMark(){
		cout<<"\nEnter Subject Marks: \n";
		for(int i=0;i<subject_number;i++)
		{
			cin>>mark[i];
		}
	}
	void display(){
		Person::display();
		cout<<"\nStudent ID: "<<id;
		cout<<"\nStudent Marks: ";
		for(int i=0;i<subject_number;i++){
			cout<<" "<<mark[i];
		}
	}
};

class Employee:public Person{
	private:
		int employee_id;
		int salary;
	public:
		Employee(){
			employee_id=salary=0;
		}
		void inputSalary(){
			cout<<"\nEnter Salary of Employer: ";
			cin>>salary;
		}
		void inputEmployeeId(){
			cout<<"\nEnter Employer ID: ";
			cin>>employee_id;
		}
		void inputName(){
			cout<<"\nFor Employer: ";
			Person::inputName();
		}
		void inputAge(){
			cout<<"\nFor Employer: ";
			Person::inputAge();
		}
		void display(){
			Person::display(); 
			cout<<"\nEmployee ID: "<<employee_id<<"\nSalary of employer: "<<salary;
		}
};

class WorkingStudent:public Student,public Employee
{
	private:
		int year;
		char course[20];
	public:
		void inputExperience(){
			cout<<"\nHOW MANY YEAR YOU HAVE EXPERIENCE: ";
			cin>>year;	
		}	
		void inputCourseName(){
			cout<<"\nENTER COURSE NAME: ";
			cin>>course;
		}
		void display(){
			Employee::display();
			Student::display();
		}
};

int main()
{
	Student stu1;
	stu1.inputName();
	stu1.inputAge();
	stu1.inputId();
	stu1.inputSubject();
	stu1.inputMark();
	stu1.display();
	
	Employee emp1;
	emp1.inputName();
	emp1.inputAge();
	emp1.inputEmployeeId();
	emp1.inputSalary();
	emp1.display();
}


