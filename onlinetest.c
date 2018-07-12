#include <stdio.h> 
int cube(int a){
	printf("%dasd",a);
	return a+5;
}
int main()
{
int a=3,b=3;
a=cube(b++);
printf("%d",b);
printf("%d",a);
}
