#include<stdio.h>
	int main(){
	int a,b,c,i,t;
	char x[5];
	int y[5];
	scanf("%d %d %d" ,&a,&b,&c);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	if(b>c){
		t=b;
		b=c;
		c=t;
	}
	scanf("%s" ,x);
	for(i=0;i<3;i++){
		if(x[i]=='A')
			y[i]=a;
		else if(x[i]=='B')
			y[i]=b;
		else if(x[i]=='C')
			y[i]=c;
	}
	for(i=0;i<3;i++)
	printf( "%d ",y[i]);
	return 0;
}
