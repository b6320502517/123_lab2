#include<stdio.h>
int main(){
	int x=1,v,m=92;
	char n[7][7]={"(^_^)","{@_@}","(*o*)","{*v*}","(T_T)","{x_x}"};
	char y='A';
	if(y>='A'&&y<='Z')
		scanf("%c",&y);
	if(x>=1&&x<=31)
		scanf("%d",&x);
	if(y>='A'&&y<='I')
		if(x%2==0)
			v=1;
		else
			v=0;
	else if(y>='J'&&y<='R')
		if(x%2==0)
			v=3;
		else
			v=2;
	else if(y>='S'&&y<='Z')
		if(x%2==0)
			v=5;
		else
			v=4;
	if(x%10==5)
		printf("%c%s/",m,n[v]);
	else
		printf("%s",n[v]);
	return 0;
	
}
