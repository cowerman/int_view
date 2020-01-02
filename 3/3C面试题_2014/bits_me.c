/*************************************************************************
    > File Name: bits_me.c
    > Author: matrixlw
    > Mail: cainiao367@163.com 
    > Created Time: 2015年07月10日 星期五 05时41分23秒
 ************************************************************************/

#include<stdio.h>
int func(x)
{

	    int count = 0;
		    while(x) {

			count++;
			x = x&(x-1);
								    }
			    return count;    
}
			
int main(void)
{
	printf("%d\n", func(9999));
}
