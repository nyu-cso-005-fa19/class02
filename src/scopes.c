#include <stdio.h>

int a;

int main() {
	printf("We start: %d\n", a);

	int a = 5;
	{
		int a = 6;
		printf("Here we go: %d\n", a);
		{
			int a = 7;
			printf("Keep it up: %d\n", a);
			{
				int a = 8;
				printf("Almost there: %d\n", a);
			}
		}

		// uncomment the below line, what happens now?
		// int a  = 9;
	}

	printf("Done: %d\n", a);
}
