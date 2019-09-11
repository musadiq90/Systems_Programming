#define MAX 4
#include <stdio.h>

int stack[MAX];
int top;
void display();
int pop();
void push(int);


void push(int token){
	char a;
	if(top==MAX-1){
		printf("Stack is full");
	}
	
	do {
		printf("\n Enter the integer value to be added: ");
		scanf("%d", &token);
		getchar();
		top=top+1;
		stack[top]=token;
		printf("do you want to continue add Y/N");
		scanf("%d", &a);
	}
	while(a=='y');
}



int pop(){
	int t;
	if(top==-1){
		printf("stack empty");
		return -1;
	}
	else {
		top=top-1;
	}	
}

void display(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("the values in stack are:\n");
		for (int i = top; i >=0 ; --i)
		{
			printf("%d \n", stack[i]);
		}
	}
}

int main(){
	push(5);
	display();
	push(6);
}

