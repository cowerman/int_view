
int main() 
{
    float f1= 0.0f, f2 = 0.0f;
    int i;
 
    for(i=0;i<10;i++)
        f1 = f1 + 0.1f;
    for(i=0;i<10;i++)
        f2 = f2 + 0.1f;

	printf("f1 = %.20f\n", f1);
	printf("f2 = %.20f\n", f2);

    if(f1 == f2)
        printf("f is 1.0 \n");
    else
        printf("f is NOT 1.0\n");
	

	return 0;
}
