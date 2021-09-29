#include<iostream>
#include<cctype>
using namespace  std;
void push(char stack[],char x);
int pop(char stack[]);
void  infixtopostfix(char infix[],char postfix[]);
int precedence(char x);
int top;
char stack[23];
int main(){
	int top=-1;
	char postfix[23],infix[23];
	cout<<"enter infix:";
	cin>>infix;
	infixtopostfix(infix,postfix);
	return 0;
	
}
void push(char postfix[],char x){
	++top;
	stack[top]=x;
}
int  pop(char stack[]){
	--top;
	return stack[top+1];
}
void infixtopostfix(char  infix[],char postfix[]){
	char  token,x;
	int i,j;
	while(infix[i]!='\0'){
		token=infix[i];
		if(isalnum(token)){
			postfix[j]=token;
				++j;
				++i;
		}
		else if(token=='('){
			push(stack,token);
			++i;
			}
			else if(token==')'){
				while(stack[top]!='('){
				x=pop(stack);
				postfix[j]=x;
				++j;
			}
				++i;
			}
			else{
				if(precedence(token)<=precedence(stack[top])){
					x=pop(stack);
					postfix[++j]=x;
				}
					push(stack,token);
				}
			while(top!=-1&&stack[top]!='('){
				x=pop(stack);
				postfix[++j]=x;
			}
		
	}
	
cout<<postfix;	
}
int precedence(char x){
	if(x=='+'||x=='-')
	 return 0;
	 else if(x=='*'||x=='/')
	 	return 1;
	 	 else
	 	   return 2;
	 	   return 3;
}
