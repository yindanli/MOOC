#include <stdio.h>
int main(){
	int n,a,b,c,s;
	scanf("%d",&n);
	if(n>99&&n<=999){
	a=n%10;
	n/=10;
	b=n%10;
	c=n/10;
	s=a*100+b*10+c;
	printf("%d",s);
	}
	return 0;
} 
