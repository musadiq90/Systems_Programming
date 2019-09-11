
#include<stdio.h>
#define MAX 10
int MAX;
void add(int);
int del();
int *queue[MAX], rear=0, front=0;
void display();
int main()
{ 


      int MAX;
      printf("Number of elements to be entered:");
      queue = (int*)calloc(MAX, sizeof(int));

     char ch , a='y';
     int choice, token;
     printf("1.add");
     printf("\n2.Delete");
     printf("\n3.show or display");
     do
     {
           printf("\nEnter your choice for the operation: ");
           scanf("%d",&choice); // choice=(int)getchar();
           getchar(); // to cater for  \r(ENTER) with input
          switch(choice)
          {
                case 1: 
                add(token);
                display();
                break;

                case 2:
                token=del();
                printf("\nThe token deleted is %d",token);
                display();
                break;

                case 3:
                display();
                break;

                default:
                printf("Wrong choice");
                break;
          }
          printf("\nDo you want to continue(y/n):");
          scanf("%c",&ch); // or ch=getchar();
		  getchar(); // to cater for  \r (ENTER) with input 
	  
    }
    while(ch=='y'||ch=='Y');
    getchar();
}

void display()
{
    int i;
    printf("\nThe queue elements are:");
    for(i=rear;i<front;i++)
    {
        printf("%d-",queue[i]);
    }
}

void add(int token)
{
    char a;
    if(rear==MAX)
    {
        printf("\nQueue full");
        return;
    }
    do
    {
        printf("\nEnter the token to be added:");
        scanf("%d",&token);
        getchar();
        queue[front]=token;
        front=front+1;
        printf("do you want to continue addion Y/N");
	    a=getchar();
    }
    while(a=='y');
}

int del()
{
    int t;
    if(front==rear)
    {
        printf("\nQueue empty");
        return 0;
    }
    rear=rear+1;
    t=queue[rear-1];
    return t;
}
