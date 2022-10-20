/**
 * This software copies a string into a buffer, then it prints what it copied to stdout.
 * This is intentionally buggy code.
 * @file 1a.c
 * @author Michel Lundell
*/

#include <stdio.h>
#include <string.h>

/**
 * main entry point of the program.
 * @param[in] argc Number of command line arguments.
 * @param[in] argv An array of pointers to null terminated arrays of characters (command line arguments).
 * @param[out] returns 0 on success.
*/

int main(int argc, char **argv)
{
	char buf[30]; /* !< a buffer that holds some characters */

	if( argc == 2) {
		printf("%s\n",argv[1]);
		strcpy(buf,argv[1]);
	} else {
		strcpy(buf,"what can possibly go wrong?");
	}

	printf("buf = %s\n",buf);

	return 0;
}
