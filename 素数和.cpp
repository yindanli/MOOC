#include "stdio.h"
int main(){
	int n,m;
	int a,b;
	int c=1;
	int sum=0;
	do{
	scanf("%d %d",&n,&m);
    }while(n<=0||n>m||n>200); 
    
    for(a=2;c<=m;a++){
    	int f=1;
    	for(b=2;b<a;b++){//�ж�a�Ƿ�Ϊһ������ 
    		if(a%b==0){
    			f=0;
			}
		}
		if(f==1){//��aΪһ������ 
			if(c>=n){//�ӵ�n��������ʼ����� 
				sum+=a;
				
			}
			c++;
		}
	    	
	}
	printf("%d",sum);
	return 0;
	
} 
