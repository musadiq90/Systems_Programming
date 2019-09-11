
#define MAX 4 //you can take any number to limit your stack size
#include<stdio.h>


int stack[MAX];
int top;

void push(int token)
{
    char a;
    if(top==MAX-1)
    {
        printf("Stack full");
        return;
    }
    do
    {
        printf("\nEnter the integer value to be added:");
        scanf("%d",&token);
        getchar();
        top=top+1;
        stack[top]=token;
        printf("do you want to continue add Y/N:  ");
        scanf("%c",&a);
        //getchar();
        
    }
    while(a=='y');
}

int pop()
{
     int t;
     if(top==-1) 
     {
          printf("Stack empty");
          return -1;
     }
     t=stack[top];
     top=top-1;
     return t;
}

void show()
{
     int i;
     printf("\nThe Stack elements are: ");
     for(i=0;i<=top;i++)
     {
          printf("%d-",stack[i]);
     }
}

#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}