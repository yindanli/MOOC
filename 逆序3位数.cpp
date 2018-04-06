#include <stdio.h>
int main(){
	int n,a,b,c;
	scanf("%d",&n);
	a=n%10;
	n/=10;
	b=n%10;
	c=n/10;
	printf("%d%d%d",a,b,c);
} 
