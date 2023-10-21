#include<stdio.h>
int main()
{
	printf("TESTING FOR USE OF CONTROL CHARACTERS");
	printf("This is the use of new line control character\n");
	printf("This is a new line, extra spaces using \t \n");

	printf("Printing a backlash \\ \n");
	printf("Testing / \n");
	printf("Testing backlash r \r");
	printf("Testing backslash a \a");
	printf("abcd \r");
	printf("Testing again");
	printf("Testing for backslash b\b");
	printf("uvwxyz");
	return 0;
	
}
// conclusion: \n new line, \t extra spaces, \ gives error of unknown escape sequence, \\ gives a single \, \r brings cursor to start of the line, \a makes a sound, / prints /, b deletes the character before it
