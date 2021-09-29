#include<iostream>
using namespace std;
class Time{

	private:
		int hours,minutes,seconds;
		
	public:
		Time(){
			hours=minutes=seconds=0;
		}
		void input(){
			cout<<"enter hours:";
			cin>>hours;
			cout<<"enter mintues: ";
			cin>>minutes;
			cout<<"enter seconds: ";
			cin>>seconds;
		}
		void display(){
			cout<<"\nHH:MM::SS="<<hours<<":"<<minutes<<":"<<seconds;
		}
		
		Time operator-(Time s2){
			Time s;
			if(hours>=s2.hours){
				if(minutes>=s2.minutes){
					if(seconds>=s2.seconds){
						s.hours=hours-s2.hours;
						s.minutes=minutes-s2.minutes;
						s.seconds=seconds-s2.seconds;
						return(s);
					}
					else{
						s.hours=hours-s2.hours;
						s.minutes=minutes-1-s2.minutes;
						s.seconds=seconds+60-s2.seconds;
						return(s);
					}
				}
				else{
					if(seconds>=s2.seconds){
						s.hours=hours-1-s2.hours;
						s.minutes=minutes+60-s2.minutes;
						s.seconds=seconds-s2.seconds;
						return(s);
					}
					else{
						s.hours=hours-1-s2.hours;
						s.minutes=minutes+60-1-s2.minutes;
						s.seconds=seconds+60-s2.seconds;
						return(s);
					}
				}	
			}
			else{
				if(minutes>=s2.minutes){
					if(seconds>=s2.seconds){
						s.hours=s2.hours-1-hours;
						s.minutes=s2.minutes+60-1-minutes;
						s.seconds=s2.seconds+60-seconds;
						return(s);
					}
					else{
						s.hours=s2.hours-1-hours;
						s.minutes=s2.minutes+60-minutes;
						s.seconds=s2.seconds-seconds;
						return(s);
					}
				}
				else{
					if(seconds>=s2.seconds)
					{
						s.hours=s2.hours-hours;
						s.minutes=s2.minutes-1-minutes;
						s.seconds=s2.seconds+60-seconds;
						return(s);
					}
					else{
						s.hours=s2.hours-hours;
						s.minutes=s2.minutes-minutes;
						s.seconds=s2.seconds-seconds;
						return(s);
					}
				}
			}	
		}
};

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
	cout<<"\nTime of  3rd object after subtraction of 1st and 2nd object: ";
	t3.display();
}


