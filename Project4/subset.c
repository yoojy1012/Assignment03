#include <stdio.h>

char subset(char);

int i, level;
char element;

int main(int argc, char* argv[])
{
	level = argc;
	element = *argv;

	for (i = 0; i < argc; i++)

		printf("[%04d] %s\n", i + 1, subset(i));

	return 0;
}

char subset(int sub)
{
	if (sub == 0)
		return 155;

	else
		for (i = 1; i <= level; i++)
		{
			return ()
		}

}