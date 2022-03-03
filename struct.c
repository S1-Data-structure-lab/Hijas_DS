
int display()
{ 
int i=0;
if(top==-1)
{
   printf(" The stack is Empty");
  }
 else
  {
for(i=top;i>=0;i--)
{
 printf("\n %d",st[top]);
 top--;
}
}return top;
}
	
