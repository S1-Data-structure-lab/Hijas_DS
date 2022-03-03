#include<stdio.h>
#include <stdlib.h>

#define n 10
 int st[n];
 int top=-1;
int temp=-1;
 int push();
 int pop();
 int display();
 int main()
 {
	int ch;
	do
	{
	printf("\n Stack Operations\n\n");
	printf("\n 1.Push() \n 2.POP() \n 3.Display() \n 4.Exit()");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		  {
		   push();
			break;
		  }
		case 2:
		  {
		   pop();
			break;
		  }
		case 3:
		  {
		  display();
			break;
		  }
		case 4:
		  {
		   exit(0);
			break;
                  }
		default: printf(" invaild Choice try again....");
		}
	} while(ch!=0||ch>=4);
 }
int push() // pushing Of elements into stack
{ 
 int m;
 if(top==(n-1))
  {
    printf(" The stack is overflow");
  }
 else
 {
  printf("Enter the value to insert:");
  scanf("%d",&m);
  top=top+1;
  st[top]=m;
 } return 0;
}
int pop(){
 if(top==-1)
  {
   printf(" The stack is Empty");
  }
 else
  {
   printf("The Pop value is: %d",st[top]);
   top=top-1;
   temp=top;
   printf("\n Remainig elements in Stack:\n");
	for(int i=temp;i>=0;i--)
	 {
	 printf("\n %d",st[temp]);
	 temp--;
	}
   }return top;
}

int display()
{ 
int i=0;
if(top==-1)
{
   printf(" The stack is Empty");
  }
 else
  {temp=top;
for(i=temp;i>=0;i--)
{
 printf("\n %d",st[temp]);
 temp--;
}
}return top;
}
	




