#include<iostream>
using namespace std;
class B;
class C;
class A{
int a=12;
friend int sum(A,B,C);
};
class B{
int b=14;
friend int sum(A,B,C);
};
class C{
int c;
friend int sum(A,B,C);
};
int sum(A aa,B bb,C cc){
cc.c=aa.a+bb.b;
return cc.c;
}
int main(){
A a1;
B b1;
C c1;
cout<<"sum is:"<<sum(a1,b1,c1);
return 0;
}
