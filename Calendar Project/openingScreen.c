//function definition file for the opening screen
#include <stdio.h>
#include "directory.h"

char username[20] = {0};

void openingScreen(void){
	
	int oldOrNewChoice;
	
	printf("\nWelcome to the calendar!\nAre you a new or returning user?\n");
	printf("\n(1)\tReturning User");
	printf("\n(2)\tNew User");
	printf("\nEnter choice:  ");
	
	scanf("%d", &oldOrNewChoice);//gets the choice of new or old user 
	
	if(oldOrNewChoice == 1){
		
		printf("\n\nPlease input username:  ");
		scanf("%s", username);
		//call to login function
		printf("\n\n\t\tWelcome %s ", username);
		system("pause");
		
	}else if(oldOrNewChoice == 2){
		
		printf("\n\nPlease input username:  ");
		scanf("%s", username);
		//call to new user function
		
	}
	
}
