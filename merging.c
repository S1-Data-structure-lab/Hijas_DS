#include<stdio.h>

int main()
{
 int a[10],b[10],c[20],n,m,i,j,temp=0,count=0;
 printf("\n Enter a limit for 1 st Array:");//First Array Insertion
 scanf("%d",&n);
 printf("\n Enter the values of 1st Array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
   	if(a[i]>a[j])
  	{
  	 temp=a[i];
  	 a[i]=a[j];
   	 a[j]=temp;
  	}
   }
 }
 printf("\n Enter a limit for 2nd Array:");//Second Array Insertion
 scanf("%d",&m);
 printf("\n Enter the values of 2nd Array:");
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
 }
 for(i=0;i<m;i++)
  {
   for(j=i+1;j<m;j++)
   {
  	if(b[i]>b[j])
  	{
  	 temp=b[i];
   	 b[i]=b[j];
  	 b[j]=temp;
  	}
  }
 }

for(i=0;i<n;i++)//merging of 1st sorted array
 {
	c[i]=a[i];
	count++;
 }

for(i=0;i<m;i++)//merging of 2nd sorted array
 {
	c[count]=b[i];
	count++;
 }

 printf("\n sorted and merged  Array:\n");
 for(i=0;i<count;i++)
  {
   for(j=i+1;j<count;j++)
   {
  	if(c[i]>c[j])
  	{
   	temp=c[i];
   	c[i]=c[j];
   	c[j]=temp;
  	}
  }
 }
 for(i=0;i<count;i++)
 {
  printf("%d \n",c[i]); 
 }
 return 0;
}
