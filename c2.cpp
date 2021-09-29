#include<iostream>
using namespace std;

class call{
	private: int a,b,c;
	public:void getdata(){
		cout<<"enter three numbers:";
		cin>>a>>b>>c;
	} 
	public : void callbyvalue(){
		int temp1;
		temp1=a;
		a=b;
		b=c;
		c=temp1;
		cout<<"after swapping :"<<a<<"\t"<<b<<"\t"<<c;
	}
	public :void callbyreference(int w,int e,int f){
			int temp1;
	    	temp1=w;
	    	w=e;
	     	e=f;
	    	f=temp1;
	    	display(w,e,f);
		
	}
	void display(int w,int e,int f){
		cout<<"\n"<<a<<"\t"<<b<<"\t"<<c;
	}
	
	
};

int main(){
	call  ca;
    ca.getdata();
    ca.callbyvalue();
   
    ca.callbyreference(ca.a,ca.b,ca.c);
    
    
}
