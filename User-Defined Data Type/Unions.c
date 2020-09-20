#include<stdio.h>
void main()
{
	union Num
	{
		int x;
		int y;
	};
	union Num Numbers;
	Numbers.x = 99;
	printf("Number At x :%d\n", Numbers.x);
	Numbers.y = 77;
	printf("Number At x :%d\n", Numbers.x);
}
