/**
 * 1a.c
 * This software copies a string into a buffer, then it prints what it copied to stdout.
 * This is intentionally buggy and poorly commented code.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char buf[30]; /* a buffer that holds some characters */

	if( argc == 2) {
		printf("%s\n",argv[1]);
		strcpy(buf,argv[1]);
	} else {
		strcpy(buf,"what can possibly go wrong?");
	}

	printf("buf = %s\n",buf);

	printf("bye bye ...\n");

	printf("Hello World!\n");

	return 0;
	
}
