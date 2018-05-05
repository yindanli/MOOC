#include <stdio.h>
int main(){
	int n,s1,s2;
	s1=-1;
	s2=0;
	do{
		scanf("%d",&n);
		if(n%2==0){
			s2++;
		}else{
			s1++; 
		} 	
	}while(n!=-1); 
	printf("%d %d",s1,s2);
	return 0;
}
