#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
	int currentLength=0;
	struct Book *book=NULL;
	do{
		printMenu();
		printf("Enter yout choice: ");
		scanf("%d",&choice);
		switch(choice){
		
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			printf("DONE!!!");
			break;
			default:
				printf("Choose again!!!\n");
	}
	}while(choice!=8);
	return 0;
}
