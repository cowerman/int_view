
int main(int argc,char *argv[])
{
int c=9,d=0;
//c=c++%5+5; 
//c = (c%=5,c++);
//d=c;

c = 0;
c = c++;
int b = c++;
printf("b = %d\n", b);

#if 0
c = c%=5;
c = c++;

d = c++%5;
printf("d=%d\n",d);
#endif
return 0;
}
