#include<stdio.h>
#include<stdlib.h>
struct test
{
	int arr[4][3][2];
}vars;
void create()
{

	int i,j,k;
	for(i=0;i<4;++i)
	{
		for(j=0;j<3;++j)
		{	
			for(k=0;k<2;++k);
			{
				vars.arr[i][j][k]=rand();
			}
		}
	}
for(i=0;i<4;++i)
	{
		for(j=0;j<3;++j)
		{	
			for(k=0;k<2;++k);
			{
				printf("%d",vars.arr[i][j][k]);
			}
			printf("\n");

