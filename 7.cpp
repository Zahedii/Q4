#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	++*p;
	p += 2;
	printf("%d", *p);
	//Output is a number it is 3
	return 0;
}