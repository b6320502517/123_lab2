#include<stdio.h>
int main(){
	int a=0,b=0,c=0,d=0;
	if(a>=0&&a<=30)
	scanf("%d",&a);
	if(b>=0&&b<=30)
	scanf("%d",&b);
	if(a>=0&&b<=30)
	scanf("%d",&c);
	d=a+b+c;
	if(d>=0&&d<=49)
		printf("F");
	else if(d>=50&&d<=54)
		printf("D");
	else if(d>=55&&d<=59)
		printf("D+");
	else if(d>=60&&d<=64)
		printf("C");
	else if(d>=65&&d<=69)
		printf("C+");
	else if(d>=70&&d<=74)
		printf("B");
	else if(d>=75&&d<=79)
		printf("B+");
	else if(d>=80&&d<=100)
		printf("A");
	return 0;
}
