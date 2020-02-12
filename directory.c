#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char myDirectory[150] = "C:/Users/Jacob Lechleiter/Documents/CECS 130/Personal Projects/Calendar Project/Calendar Directory/";
char calendarFile[150];
char restrictionsFile[150];	

void establishDirectory(char * user){
	strcat(myDirectory, user);//gives me a directory for the username
	strcat(myDirectory, "/");
	return;
}//end makeDirectory


void directoryBuilder(char * user){
		
		
		establishDirectory(user);
		_mkdir(myDirectory);
		
		printf("New direectory made at:  %s", myDirectory);
		//makes a directory if the username does not already have one
	
}//end makeDirectory

void createUserFile(char * user){
	
	//initiate file pointers
	FILE *pCalendarFile;
	FILE *pRestrictionsFile;
	
	strcat(calendarFile, myDirectory);
	strcat(calendarFile, user);
	strcat(calendarFile, ".txt");//grabs and makes a file name 
	pCalendarFile = fopen(calendarFile,"a");//makes/ opens user calendar file for appending
	fclose(pCalendarFile);
	
	
	strcat(restrictionsFile, myDirectory);
	strcat(restrictionsFile, user);
	strcat(restrictionsFile, "Restrictions.txt");
	pRestrictionsFile = fopen(restrictionsFile,"a");
	fclose(pRestrictionsFile);
	
}



