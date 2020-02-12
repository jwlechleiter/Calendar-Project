//directory functions header file
/*functions that we need
find directory
make direcotry 
open directory*/

//IN ALL OF THESE FUNCTIONS, WE'RE ASSUMING THAT CHAR* IS THE USERNAME OF THE USER, HOWEVER
extern char myDirectory[150];
extern char calendarFile[150];
extern char restrictionsFile[150];	
void directoryBuilder(char *);
void establishDirectory(char*);
void createUserFile(char*);



