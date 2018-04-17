#include <stdio.h>
int main(){
	int BJT,UST,ih;
	int hour,minute;
	scanf("%d",&BJT);
	if(BJT>=0&&BJT<=2359){
	hour=BJT/100;
	minute=BJT%100;
	ih=hour-8;
	if(ih<0){
		ih=ih+24;
	}
	UST=ih*100+minute;
	printf("%d",UST); 
	} 
	return 0;
}
