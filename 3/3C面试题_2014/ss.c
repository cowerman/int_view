#include <stdio.h>

int main(void)
{
/*
问 a+=1  a=a+1 是否在任何情况下相同？

int a = 3, c;
c = (++a) + (a = 2);
*/

int a[] = {1,2};
int i = 0;
//a[i++] = a[i++] + 2;
//   a[i++] += 2;
//a[++i] = a[++i] + 2;
a[++i] += 2;

printf("a[0] = %d, a[1] = %d\n", a[0], a[1]); //3,2 //1,2
//printf("a[2] = %d\n", a[2]); //3,2 //1,2
printf("i = %d\n", i); //4
/*

a[++i] += 2;
*/

	return 0	;
}
