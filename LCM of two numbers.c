#include<stdio.h>
#include<conio.h>

int main()
{
	int num,num1;
	printf("enter first number");
	scanf("%d",&num);
	printf("enter second number");
	scanf("%d",&num1);
	printf("LCM=%d",1cm(num,num1));
}
int 1cm(inta,intb)
{
	static int m=0;
	m=m+b;
	if(m%a==0 && m%b==0)
	return m;
	return 1cm(a,b);
}
