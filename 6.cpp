﻿#include<stdio.h>
int main()
{
	int a;
	char *x;
	x = (char *)&a;
	a = 512;
	x[0] = 1;
	printf("%d\n", a);
	//Output is 513
	return 0;
}
