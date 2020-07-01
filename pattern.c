#include<stdio.h>
void main()
{
int n1,n2,i,j,k=0,count=30,count2=0,pos;

printf("Enter the no.\n");
scanf("%d",&n1);
printf("enter Pattern\n");
scanf("%d",&i);
for(j=0;j<=31;j++)
{
if(i>>j&1)
k=j;
}
j=0;
for(;k>=0;k--)
{
j=j|1<<k;
}

for(pos=31;pos>=0;pos--)
printf("%d",n1>>pos&1);
printf("\n");
for(count=30;count;count--)
{
      if((n1&j)==i)
	  
	 {
	  
	  count2++;
	  }
n1=n1>>1;

}


printf("Output : %d\n",count2);
}