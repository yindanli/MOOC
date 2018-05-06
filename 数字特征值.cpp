#include <stdio.h>
int main(){
	int n,p,y,x,s;//n是输入的数字,p是位数，y是二进制对应的十进制数 
	s=0;
	p=1;
	y=1;
	scanf("%d",&n);//巧妙的是134＋1和4＋1的奇偶性一致 
	do{
		x=n+p;//找规律得如果奇偶一致，相加和为偶数 
		if(x%2==0){
			s+=y;
		}
		n/=10;//这样就可以从低位到高位逐个测试 
		p++;
		y*=2;
	}while(n>0);
	
	printf("%d",s);
	return 0;
} 
