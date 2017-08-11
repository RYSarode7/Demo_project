#include<stdio.h>
void main()
{
	int a[100],b[100],s,i,j;
	printf("enter the number of elements in the array");
	scanf("%d", &s);
	printf("enter the elements of first array");
	for(i=0;i<s;i++)
		{scanf("%d", &a[i]);}
	printf("enter the elements of second array");
	for(j=0;j<s;j++)
		{scanf("%d", &b[j]);}
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
		a[i]=a[i]+b[j];
		b[j]=a[i]-b[j];
		a[j]=a[i]-b[j];
		i++;
		}
	}
	printf("Array a\t");
	for(i=0;i<s;i++)
	{printf("a[%d]=%d,\t",i,a[i]);}
	printf("\nArray b\t");
	for(j=0;j<s;j++)
	{printf("b[%d]=%d,\t",j,b[j]);}
}
