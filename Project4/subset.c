#include <stdio.h>

char subset(char);

int i;

int main(int argc, char* argv[])
{

	for (i = 0; i <= argc - 1; i++)
		
		printf("[%04d] %s\n", i + 1, subset(i));
	
	return 0;
}

char subset(char sub)
{
	if (sub == 0)
		return 155;
	else
		return 
}
