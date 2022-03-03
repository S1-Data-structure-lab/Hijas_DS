#include<stdio.h>

int main()
{
 int a[10],n,i,j,temp=0;

 printf("\n Enter a limit:");
 scanf("%d",&n);
 printf("\n Enter the values of Array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Sorted Array:\n");
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
 for(i=0;i<n;i++)
 {
  printf("%d \n",a[i]);
  
 }
 return 0;
}
