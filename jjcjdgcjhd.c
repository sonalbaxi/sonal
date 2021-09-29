#include<stdio.h>
#include<stdlib.h>
struct emp{
	int eno;
	struct emp *next;
	 
};

typedef struct emp node;
node *start;
void create(node *);
void display(node *);
void frequency(node *);

void main(){
	int choice;
	start=(node *)malloc(sizeof(node));
	while(1){
		
		printf("1 for create:\n");
		printf("2 for display:\n");
		printf("3 for frequency:\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				create(start);
				break;
				case 2:
					display(start);
					break;
					case 3:
						frequency(start);
						break;
						default:
							printf("Invalid choice..........");
		}
		getch();
	}
		
}
void create(node *p){
	    printf("enter no:");
	    scanf("%d",&p->eno);
	    if(p->eno==-1)
	    p->next=NULL;
	    else{
	    	p->next=(node *)malloc(sizeof(node));
	    	create(p->next);
		}
	
		
	
}
void display(node *p){
	while(p->next!=NULL){
	
	printf("%d\n",p->eno);
	p=p->next;
}
}
void frequency(node *p){
	int a[34],m;
	int i=0;
	while(p->next!=NULL){
		a[i]=p->eno;
		++i;
		p=p->next;
		
	}
	for(m=0;m<i;++m){
		printf("%d\n",a[i]);
	}
}
