#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utils.h"

// gcc -m32 /tmp/level03.c -o /tmp/level03

void decrypt(unsigned int key)
{
	unsigned int len;
	unsigned int i;
	char str[] = "Q}|u`sfg~sf{}|a3";

	deathrays;
	len = strlen(str);
	for (i = 0; i < len; i++)
		str[i] ^= key;
	if (!strcmp(str, "Congratulations!"))
		system("/bin/sh");
	else
		printf("\nInvalid Password!\n");
}

void test(unsigned int input, unsigned int secret)
{
	int res;

	res = secret - input;
	switch (res)
	{
		case 0x1:
			decrypt(res);
			break;
		case 0x2:
			decrypt(res);
			break;
		case 0x3:
			decrypt(res);
			break;
		case 0x4:
			decrypt(res);
			break;
		case 0x5:
			decrypt(res);
			break;
		case 0x6:
			decrypt(res);
			break;
		case 0x7:
			decrypt(res);
			break;
		case 0x8:
			decrypt(res);
			break;
		case 0x9:
			decrypt(res);
			break;
		case 0x10:
			decrypt(res);
			break;
		case 0x11:
			decrypt(res);
			break;
		case 0x12:
			decrypt(res);
			break;
		case 0x13:
			decrypt(res);
			break;
		case 0x14:
			decrypt(res);
			break;
		case 0x15:
			decrypt(res);
			break;
		default:
			decrypt(rand());
			break;
	}
}

int main(void)
{
	int input;

	deathrays;
	srand(time(NULL));
	printf("***********************************\n");
	printf("*\t\tlevel03\t\t**\n");
	printf("***********************************\n");
	printf("Password:");
	scanf("%d", &input);
	test(input, 0x1337d00d);
	return EXIT_SUCCESS;
}
