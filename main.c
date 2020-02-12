#include <stdio.h>
#include <stdlib.h>
#include "openingScreen.h"
#include "mainMenu.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	openingScreen();
	//call to opening prompt function
	mainMenu();//run main menu function
	return 0;
}
