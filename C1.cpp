#include<iostream>
#include<cmath>
using namespace std;

class Rectangle{
	private :int width,height;
	
    public:	void getdata (){
		cout<<"enter width and height respectively\n";
		
		 cin>>width>>height;
		 
	}
	public: void display(){
		cout<<"\nthe perimeter is:"<<width+height;
		cout<<"\nthe area is:"<<width*height;
		cout<<"\nthe diagonal is"<<sqrt(pow(width,2)+pow(height,2));
	}
};
int main(){

  Rectangle r;
  r.getdata();
  r.display();
  return 0;
 	
	
}
