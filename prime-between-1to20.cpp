#include <stdio.h>
#include <conio.h>

void main() {

	int j, i;
	int flag;
	clrscr();

	for(j=2; j<=20; j++){
		flag=0;
		for(i=2; i<=j/2; i++){
			if(j % i==0){
				flag=1;
				break;
			}
		} 

		if(flag==0){
			printf("%d\n",j);
		}
	
	}

	getch();
}

