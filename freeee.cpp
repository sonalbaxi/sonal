#include<stdio.h>
struct emp{
	int eno;
	struct emp *next;
	 
};
typedef struct emp node;
nodee *start;

void main(){
	int choice;
	while(1){
		
		printf("1 for create:");
		printf("2 for display:");
		printf("enter your choice:");
		scanf("%d",choice);
		switch(choice){
			case 1:
				create(start);
				break;
				case 2:
					display(start);
					break;
					case 3:
						exit();
						default:
							printf("Invalid choice..........");
		}
	}
		
}
void create(node *p){
	
		p->next=(node *)malloc(sizeof(node));
		printf("enter no:");
	    scanf("%d",p->eno);
	    if(p->eno!=-1)
		create(p->next);
		p->next='\0';
	
}
void display(node *p){
	while(p!='\0'){
	
	printf("%d\n",p->eno);
	p=p->next;
}
}
