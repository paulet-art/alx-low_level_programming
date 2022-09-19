#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return:Always 0
 */
int password(int password_length)
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";

	printf("\t");

	for(int i = 0; i < password_length; i++)
	{
		 printf("*");
	}

	printf("\n");
	printf("\t");

	srand(time(NULL));

	for(int i = 0; i < password_length; i++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}

