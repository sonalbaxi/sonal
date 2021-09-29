#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct emp{
	int data;
	struct emp *next;
};
typedef struct emp node;
node *start;
void insert(node *,int);
void display(node *);
int main(){
	int choice,eno;
	start=(node *)malloc(sizeof(node));
	start=NULL;
	while(1){
		printf("\n-------------MENU-----------\n");
		printf("\n1 for insert:\n");
		printf("\n2 for display:\n");
		printf("\n3 for exit:\n");
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter no:");
				scanf("%d",&eno);
				insert(start,eno);
				break;
				case 2:
					printf("linklist is below:");
					display(start);
					break;
					case 3:
						exit(0);
						default :
							printf("Invalid choice:");
		}getch();
	}
	return 0;
}
void insert(node *p,int x){
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		while(p->next!=NULL){
	    p =p->next;
		}
		p->next=temp;
	}

}
void display(node *p){
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
