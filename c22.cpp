#include <iostream> 
using namespace std; 
void callbyvalue(int a,int b, int c); 
void print(int a,int b,int c); 
void callbyreference(int &a,int &b,int &c); 
void callbypointer(int *a,int *b,int *c); 
int main(){ 
int a,b,c; 
int *p=&a,*q=&b,*r=&c; 


cout<<"\nEnter three numbers"; 
cin>>a>>b>>c; 
cout<<"\nAfter swapping through call by value\n"; 
callbyvalue(a,b,c); 
print(a,b,c);
 
cout<<"\nAfter swapping through call by reference\n";
callbyreference(a,b,c);
print(a,b,c);

callbypointer(p,q,r); 
cout<<"\nAfter swapping through call by pointer\n"; 
print(a,b,c); 
return 0; 
} 
void callbyvalue(int a,int b, int c) { 
int temp; 
temp=a; 
a=b; 
b=c; 
c=temp; 
} 
void callbyreference(int &a,int &b,int &c){ 
int temp; 
temp=a; 
a=b; 
b=c; 
c=temp; 
} 
void callbypointer(int *a,int *b,int *c){ 
int temp; 
temp=*a; 
*a=*b; 
*b=*c; 
*c=temp; 
} 
void print(int a,int b,int c) { 
cout<<"\n"<<a; 
cout<<"\n"<<b; 
cout<<"\n"<<c; 
} 


