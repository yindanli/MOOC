#include <stdio.h>
int main(){
	int n;
	int i=1;
	scanf("%d",&n);
	if(n%2!=0){
		while(i<=n-2){
			printf("%d ",i);
			i+=2;
		}
		printf("%d",i);
	}
	else{
		while(i<=n-3){
			printf("%d ",i);
			i+=2;
		}
		printf("%d",i);
	}
	return 0;	
} 
