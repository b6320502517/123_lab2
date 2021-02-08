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
		if(x%2==0){
			
			if (x%10==5)
				printf("%c{@_@}/",m);
			else
			printf("{@_@}");
		}
			
		else {
		
			if (x%10==5)
			printf("%c(^_^)/",m);
			else
			printf("(^_^)");
		}
			
		

	else if(y>='J'&&y<='R')
		if(x%2==0){
			
			if (x%10==5)
			printf("%c{*v*}/",m);
			else
			printf("{*v*}");
			
		}
			
		else{
			
			if (x%10==5)
			printf("%c(*o*)/",m);
			else
			printf("(*o*)");
		}
	else if(y>='S'&&y<='Z')
		if(x%2==0){
			
			if (x%10==5)
			printf("%c{x_x}/",m);
			else
			printf("{x_x}");
		}

		else{
			
			if (x%10==5)
			printf("%c(T_T)/",m);
			else
			printf("(T_T)");
		}

	return 0;
	
}
