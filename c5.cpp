#include<iostream>
using namespace std;

class peri{
	public: void perimeter(int a){
		int p=4*a;
		cout<<"\nperimeter of square is:"<<p;
	}
	public: void perimeter(int a,int b){
		int p=2*(a+b);
		cout<<"\nperimeter of rectangle is:"<<p;
	}
	public: void perimeter(int a,int b,int c){
		int p=a+b+c;
		cout<<"\nperimeter of triangle is:"<<p;
	}
	
};

int main(){
	
	peri s;
	s.perimeter(10);
	s.perimeter(10,20);
	s.perimeter(10,20,30);
	return 0;
}
