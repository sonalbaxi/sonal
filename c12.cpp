#include<iostream>
using namespace std;
class Time
{
	private:
		int hours,minutes,seconds;
		
	public:
		Time()
		{
			hours=minutes=seconds=0;
		}
		void input()
		{
			cout<<"Enter hours:";
			cin>>hours;
			cout<<"Enter minues: ";
			cin>>minutes;
			cout<<"Enter seconds: ";
			cin>>seconds;
		}
		void display()
		{
			cout<<"\nHH:MM::SS="<<hours<<":"<<minutes<<":"<<seconds;
		}
		friend Time operator-(Time,Time);
};
Time operator-(Time s1,Time s2)
{
	Time s;
	if(s1.hours>=s2.hours)
	{
		if(s1.minutes>=s2.minutes)
		{
			if(s1.seconds>=s2.seconds)
			{
				s.hours=s1.hours-s2.hours;
				s.minutes=s1.minutes-s2.minutes;
				s.seconds=s1.seconds-s2.seconds;
				return(s);
			}
			else
			{
				s.hours=s1.hours-s2.hours;
				s.minutes=s1.minutes-1-s2.minutes;
				s.seconds=s1.seconds+60-s2.seconds;
				return(s);
			}
		}
		else
		{
			if(s1.seconds>=s2.seconds)
			{
				s.hours=s1.hours-1-s2.hours;
				s.minutes=s1.minutes+60-s2.minutes;
				s.seconds=s1.seconds-s2.seconds;
				return(s);
			}
			else
			{
				s.hours=s1.hours-1-s2.hours;
				s.minutes=s1.minutes+60-1-s2.minutes;
				s.seconds=s1.seconds+60-s2.seconds;
				return(s);
			}
		}	
	}
	else
	{
		if(s1.minutes>=s2.minutes)
		{
			if(s1.seconds>=s2.seconds)
			{
				s.hours=s2.hours-1-s1.hours;
				s.minutes=s2.minutes+60-1-s1.minutes;
				s.seconds=s2.seconds+60-s1.seconds;
				return(s);
			}
			else
			{
				s.hours=s2.hours-1-s1.hours;
				s.minutes=s2.minutes+60-s1.minutes;
				s.seconds=s2.seconds-s1.seconds;
				return(s);
			}
		}
		else
		{
			if(s1.seconds>=s2.seconds)
			{
				s.hours=s2.hours-s1.hours;
				s.minutes=s2.minutes-1-s1.minutes;
				s.seconds=s2.seconds+60-s1.seconds;
				return(s);
			}
			else
			{
				s.hours=s2.hours-s1.hours;
				s.minutes=s2.minutes-s1.minutes;
				s.seconds=s2.seconds-s1.seconds;
				return(s);
			}
		}
	}	
}

int main()
{
	Time t1,t2,t3;
	cout<<"Enter Time for 1st object:\n";
	t1.input();
	cout<<"Enter Time for 2nd object:\n";
	t2.input();
	cout<<"\nTime of 1st object: ";
	t1.display();
	cout<<"\nTime of 2nd object: ";
	t2.display();
	t3=t1-t2;
	cout<<"\nTime of 3rd object after subtraction of 1st and 2nd object: ";
	t3.display();
}


