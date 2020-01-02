#include <stdio.h>

int main(void)
{
char ch[12];
char *p1, *p2;
char **pp;
p1 = ch;
pp = (char **)&ch; //char (*)[12]
p2 = *pp; //char *?    char [12] ?

printf("&ch[0]: %p\n", ch);
printf("p1: %p\n", p1);
printf("pp: %p\n", pp);
printf("p2: %p\n", p2);

#if 0
	char s[] = "12345";

	char *p = s;

	//printf("%p\n", (*(int **))p);
	printf("%c\n", *(*((int **)(&p))));
	printf("%c\n", *((int *)p));
#endif
	return 0;
}
