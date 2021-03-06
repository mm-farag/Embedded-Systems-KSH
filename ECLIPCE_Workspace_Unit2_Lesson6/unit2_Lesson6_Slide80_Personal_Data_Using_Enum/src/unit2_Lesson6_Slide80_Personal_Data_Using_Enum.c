/*
 ============================================================================
 Name        : unit2_Lesson6_Slide80_Personal_Data_Using_Enum.c
 Author      : Mohamed Mustafa Farag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

enum NUMGender
{
	male,
	female,
};

struct Sperson
{
	char name[50];
	enum NUMGender m_Gender;
};



int main(void)
{
	int i;
	struct Sperson person[] =
	{{"Mohamed", male}, {"Linda", female}, {"Nader", male}};

	printf("size of struct: %d\n", sizeof(struct Sperson));
	printf("size of enum: %d\n", sizeof(enum NUMGender));

	for(i= 0; i<sizeof(person)/sizeof(struct Sperson); i++)
	{
		printf("name: %-20sgender:%s\n", person[i].name, (person[i].m_Gender == male)?"Male":"Female");
		/*enum improves the readability very well*/
	}

	return EXIT_SUCCESS;
}
