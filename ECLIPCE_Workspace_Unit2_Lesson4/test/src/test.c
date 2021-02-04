/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// name[i] == &name[i]

	char name[3][10] =
	{
			{"abcd"},{"abCd"},{"Yasser"},
	};



//	printf("the length of this string is: %d\n", strlen(name[0]));
//	printf("%s\n", &name[1]);
//	printf("%s\n", &name[2]);
	printf("%d\n", atoi("KG120"));


	return EXIT_SUCCESS;
}
